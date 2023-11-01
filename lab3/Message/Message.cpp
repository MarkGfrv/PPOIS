#include "Message.h"
Message::Message(string nickname, int age, string emailAddress, string password, string messageText, string departureDate, string readStatus) : User(nickname, age, emailAddress, password), messageText(messageText), departureDate(departureDate), readStatus(readStatus) {}
void Message::ShowMessage() {
	cout << "Author nickname: " << nickname << endl;
	cout << "Author age: " << age << endl;
	cout << "Message Text: " << messageText << endl;
	cout << "Departure Date: " << departureDate << endl;
	cout << "Read status: " << readStatus << endl;
}
bool Message::canSendMessage() {
	if (receiver->isBlackListed(*sender)) {
		cout << "Message can not be delevered!" << endl;
		return false;
	}
	return true;
}
void Message::MarkAsRead() {
	cout << "Message marked as read!" << endl;
	readStatus = "Read!";
}
string Message::GetReadStatus() const {
	return readStatus;
}
void Message::SetSender(User* user) {
	sender = user;
}
void Message::SetReceiver(User* user) {
	receiver = user;
}
