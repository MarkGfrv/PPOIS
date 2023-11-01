#include "GroupChat.h"
Groupchat::Groupchat(string groupName, string groupDescription) : groupName(groupName), groupDescription(groupDescription) {}
void Groupchat::ShowGroupInfo() {
	cout << "Group name: " << groupName << endl;
	cout << "Group description: " << groupDescription << endl;
}
void Groupchat::AddMember(User* member) {
	listOfGroupMembers.push_back(member);
}
void Groupchat::AddAdmin(User* administrator) {
	listOfAdministrators.push_back(administrator);
}
const vector<User*>& Groupchat::GetListOfGroupMembers() const {
	return listOfGroupMembers;
}
const vector<User*>& Groupchat::GetListOfAdministrators() const {
	return listOfAdministrators;
}
