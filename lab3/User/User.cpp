#include "User.h"
User::User(string nickname, int age, string emailAddress, string password) : nickname(nickname), age(age), emailAddress(emailAddress), password(password) {}
void User::ShowProfile() {
	cout << "Users nickname: " << nickname << endl;
	cout << "Users age: " << age << endl;
	cout << "Users email: " << emailAddress << endl;
	cout << "Users password: " << password << endl;
}
void User::ChangeNickname(string newNickname) {
	nickname = newNickname;
	cout << "New User nickname is " << nickname << endl;
}
void User::ChangePassword(string newPassword) {
	password = newPassword;
	cout << "New User password is " << password << endl;
}
void User::SendInvite(User& friendd) {
	cout << "Friend request sended to " << friendd.nickname << endl;
}
bool User::IsBlackListed(const User& user) {
	for (const User* blockedUser : blackList.listOfBlockedUsers) {
		if (blockedUser == &user) {
			cout << "Пользователь находится в черном списке!" << endl;
			return true;
		}
	}
	cout << "Пользователь не находится в черном списке." << endl;
	return false;
}
string User::GetNickname() const {
	return nickname;
}
string User::GetPassword() const {
	return password;
}
