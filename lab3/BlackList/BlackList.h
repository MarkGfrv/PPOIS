#pragma once

#include <vector>
#include <string>
using namespace std;
class User; 
class BlackList {
public:
	void AddUserToBlackList(User* user, string dateAdded, string timeAdded);
	void ClearBlackList();
protected:
	vector<User*> listOfBlockedUsers;//Список заблокированных пользователей
	vector<string> blockingDate;//Дата блокировки
	vector<string> blockingTime;//Время блокировки
	friend class User;
};
