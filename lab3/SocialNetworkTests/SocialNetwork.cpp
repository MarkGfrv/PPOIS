#include "pch.h"
#include "CppUnitTest.h"
#include "../Социальная сеть/BlackList.h"
#include "../Социальная сеть/Commentary.h"
#include "../Социальная сеть/Friend.h"
#include "../Социальная сеть/GroupChat.h"
#include "../Социальная сеть/Message.h"
#include "../Социальная сеть/Publication.h"
#include "../Социальная сеть/Reaction.h"
#include "../Социальная сеть/User.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(UserTests)
{
public:
    TEST_METHOD(TestChangeNickname)
    {
        User user("Alice", 25, "alice@example.com", "password");
        user.ChangeNickname("Alicia");
        Assert::AreEqual("Alicia", user.GetNickname().c_str()); 
    }

    TEST_METHOD(TestChangePassword)
    {
        User user("Alice", 25, "alice@example.com", "password");
        user.ChangePassword("newpassword");
        Assert::AreEqual("newpassword", user.GetPassword().c_str()); 
    }

    TEST_METHOD(TestIsNotBlacklisted)
    {
        User user1("Alice", 25, "alice@example.com", "password");
        User user2("Bob", 30, "bob@example.com", "password");

        // user2 не находится в черном списке user1
        Assert::IsFalse(user1.isBlackListed(user2));
    }

};

TEST_CLASS(FriendTests)
{
public:
    TEST_METHOD(TestAcceptRequest)
    {
        Friend friendObj("Bob", 30, "2023-01-01", "Confirmed");
        friendObj.AcceptRequest(); 
        Assert::AreEqual("Confirmed", friendObj.GetFriendStatus().c_str());
    }
    TEST_METHOD(TestShowFriendsProfile)
    {
        Friend friendUser("Alice", 25, "2023-01-01", "Confirmed");

        // Проверяем, что профиль друга корректно отображается
        Assert::AreEqual("Alice", friendUser.GetNickname().c_str());
        Assert::AreEqual(25, friendUser.GetAge());
        Assert::AreEqual("2023-01-01", friendUser.GetDateWhenAddedToFriends().c_str());
        Assert::AreEqual("Confirmed", friendUser.GetFriendStatus().c_str());
    }
};

TEST_CLASS(MessageTests)
{
public:
    TEST_METHOD(TestMarkAsRead)
    {
        User sender("Alice", 25, "alice@example.com", "password");
        User receiver("Bob", 30, "bob@example.com", "password");
        Message message("Alice", 25, "alice@example.com", "password", "Hello, Bob!", "2023-01-01", "Unread");
        message.SetSender(&sender); 
        message.SetReceiver(&receiver); 

        message.MarkAsRead();
        Assert::AreEqual("Read!", message.GetReadStatus().c_str()); 
    }
    TEST_METHOD(TestCanSendMessageToNonBlacklistedUser)
    {
        User sender("Alice", 25, "alice@example.com", "password");
        User receiver("Bob", 30, "bob@example.com", "password");

        Message message("Alice", 25, "alice@example.com", "password", "Hello, Bob!", "2023-01-01", "Unread");
        message.SetSender(&sender);
        message.SetReceiver(&receiver);

        // Пользователь не находится в черном списке, сообщение может быть отправлено
        Assert::IsTrue(message.canSendMessage());
    }

};
TEST_CLASS(PublicationTests)
{
public:
    TEST_METHOD(TestShowPublicationInfo)
    {
        User author("Alice", 25, "alice@example.com", "password");
        Publication publication(&author, "2023-01-01", "12:00 PM");
        Assert::AreEqual("Alice", publication.GetPublicationAuthor()->GetNickname().c_str());
    }
    TEST_METHOD(TestEditCommentary)
    {
        User user("Alice", 25, "alice@example.com", "password");
        Commentary commentary(&user, "Initial commentary", "2023-01-01", "12:00 PM");

        commentary.EditCommentary("Edited commentary");

        Assert::AreEqual("Edited commentary", commentary.GetText().c_str());
    }
};

TEST_CLASS(CommentaryTests)
{
public:
    TEST_METHOD(TestShowCommentaryInfo)
    {
        User author("Alice", 25, "alice@example.com", "password");
        Commentary commentary(&author, "A comment", "2023-01-01", "1:00 PM");
        Assert::AreEqual("Alice", commentary.GetCommentaryAuthor()->GetNickname().c_str());
    }
    TEST_METHOD(TestEditCommentary)
    {
        User user("Alice", 25, "alice@example.com", "password");
        Commentary commentary(&user, "Initial commentary", "2023-01-01", "12:00 PM");

        // Проверяем, что начальный текст комментария верен
        Assert::AreEqual("Initial commentary", commentary.GetText().c_str());

        // Редактируем текст комментария
        commentary.EditCommentary("Edited commentary");

        // Проверяем, что текст комментария изменился
        Assert::AreEqual("Edited commentary", commentary.GetText().c_str());
    }

    TEST_METHOD(TestCommentaryAuthor)
    {
        User user("Alice", 25, "alice@example.com", "password");
        Commentary commentary(&user, "Commentary text", "2023-01-01", "12:00 PM");

        // Проверяем, что автор комментария верен
        Assert::AreEqual("Alice", commentary.GetCommentaryAuthor()->GetNickname().c_str());
    }

};

TEST_CLASS(ReactionTests)
{
public:
    TEST_METHOD(TestShowReactionInfo)
    {
        User author("Alice", 25, "alice@example.com", "password");
        Reaction reaction("Like", &author, "2023-01-01", "2:00 PM");
        Assert::AreEqual("Alice", reaction.GetReactionAuthor()->GetNickname().c_str());
    }
    TEST_METHOD(TestChangeReactionType)
    {
        User user("Alice", 25, "alice@example.com", "password");
        Reaction reaction("Like", &user, "2023-01-01", "12:00 PM");

        reaction.ChangeReactionType("Love");

        Assert::AreEqual("Love", reaction.GetReactionType().c_str());
    }

    TEST_METHOD(TestRemoveReaction)
    {
        User user("Alice", 25, "alice@example.com", "password");
        Reaction reaction("Like", &user, "2023-01-01", "12:00 PM");
        vector<Reaction*> reactionList;

        reactionList.push_back(&reaction);
        reaction.SetReactionList(&reactionList);

        // Проверяем, что reaction удаляется из списка реакций.
        reaction.RemoveReaction();

        Assert::IsTrue(reactionList.empty());
    }
};

TEST_CLASS(GroupchatTests)
{
public:
    TEST_METHOD(TestAddMember)
    {
        Groupchat group("Test Group", "A test group");
        User member("Alice", 25, "alice@example.com", "password");
        group.AddMember(&member);

        const std::vector<User*>& members = group.GetListOfGroupMembers();
        Assert::IsTrue(members.size() == 1);

        //Проверка, что добавленный пользователь действительно является членом группы.
        Assert::IsTrue(std::find(members.begin(), members.end(), &member) != members.end());
    }

    TEST_METHOD(TestAddAdmin)
    {
        Groupchat group("Test Group", "A test group");
        User admin("Bob", 30, "bob@example.com", "password");
        group.AddAdmin(&admin);

        const std::vector<User*>& admins = group.GetListOfAdministrators();
        Assert::IsTrue(admins.size() == 1);

        // Проверка, что добавленный пользователь действительно является администратором группы.
        Assert::IsTrue(std::find(admins.begin(), admins.end(), &admin) != admins.end());
    }
};
