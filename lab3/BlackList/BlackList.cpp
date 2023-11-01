#include "BlackList.h"
#include "User.h"
void BlackList::AddUserToBlackList(User* user, string dateAdded, string timeAdded) {
	listOfBlockedUsers.push_back(user);
	blockingDate.push_back(dateAdded);
	blockingTime.push_back(timeAdded);
}
void BlackList::ClearBlackList() {
	listOfBlockedUsers.clear();
	blockingDate.clear();
	blockingTime.clear();
}
