#include "Friend.h"
Friend::Friend(string nickname, int age, string dateWhenAddedToFriends, string friendStatus) : User(nickname, age, emailAddress, password), dateWhenAddedToFriends(dateWhenAddedToFriends), friendStatus(friendStatus) {}
void Friend::ShowFriedsProfile() {
	cout << "Friend nickname: " << nickname << endl;
	cout << "Friend age: " << age << endl;
	cout << "Date when added to friends: " << dateWhenAddedToFriends << endl;
	cout << "Friend status: " << friendStatus << endl;
}
void Friend::AcceptRequest() {
	cout << "Friend request accepted!" << endl;
	friendStatus = "Confirmed";
}
string Friend::GetFriendStatus() const {
	return friendStatus;
}
int Friend::GetAge() const {
	return age;
}
const string& Friend::GetDateWhenAddedToFriends() const {
	return dateWhenAddedToFriends;
}
