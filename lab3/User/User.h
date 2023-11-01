#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "BlackList.h"

using namespace std;
class User {
public:
	User(string nickname, int age, string emailAddress, string password);
	void ShowProfile();
	void ChangeNickname(string newNickname);
	void ChangePassword(string newPassword);
	void SendInvite(User& friendd);
	bool isBlackListed(const User& user);
	string GetNickname() const;
	string GetPassword() const;
protected:
	string nickname;//Имя пользователя
	int age;//возраст
	string emailAddress;//Электронный адрес
	string password;//Пароль
	BlackList blackList;
};
