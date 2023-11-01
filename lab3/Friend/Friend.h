#pragma once
#include "User.h"
class Friend : public User {
public:
	Friend(string nickname, int age, string dateWhenAddedToFriends, string friendStatus);
	void ShowFriedsProfile();
	void AcceptRequest();
	string GetFriendStatus() const;
	int GetAge() const;
	const string& GetDateWhenAddedToFriends() const;
protected:
	string dateWhenAddedToFriends;//Дата добавления в друзья
	string friendStatus;//Статус дружбы(подтверждённый, ожидающий подстверждения)
};
