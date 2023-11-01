#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "Commentary.h"
#include "Reaction.h"

using namespace std;
class Publication {
public:
	Publication(User* nameOfPublicationAuthor, string dateOfPublication, string timeOfPublication);
	void ShowPublicationInfo();
	User* GetPublicationAuthor();
	const string& GetText() const;
protected:
	User* nameOfPublicationAuthor;//Автор публикации
	string dateOfPublication;//Дата публикации
	string timeOfPublication;//Время публикации
};
