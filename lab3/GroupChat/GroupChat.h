#pragma once
#include <iostream>
#include <vector>
#include "User.h"
#include "Message.h"
using namespace std;
class Groupchat {
public:
	Groupchat(string groupName, string groupDescription);
	void ShowGroupInfo();
	void AddMember(User* member);
	void AddAdmin(User* administrator);
	const vector<User*>& GetListOfGroupMembers() const;
	const vector<User*>& GetListOfAdministrators() const;
protected:
	string groupName;//Название группы
	string groupDescription;//Описание группы
	vector<User*> listOfGroupMembers;//Список участников
	vector<User*> listOfAdministrators;//Список администраторов
};
