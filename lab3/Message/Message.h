#pragma once
#include "User.h"
class Message : public User {
public:
	Message(string nickname, int age, string emailAddress, string password, string messageText, string departureDate, string readStatus);
	void ShowMessage();
	bool canSendMessage();
	void MarkAsRead();
	string GetReadStatus() const;
	void SetSender(User* user);
	void SetReceiver(User* user);
protected:
	string messageText;//Текст сообщения
	string departureDate;//Дата отправки сообщения
	string readStatus;//Статус прочтения сообщения
	User* sender;
	User* receiver;
};
