#pragma once
#include "User.h"
class Commentary {
public:
	Commentary(User* nameOfCommentaryAuthor, string textOfCommentary, string dateOfCommentary, string timeOfCommentary);
	void ShowCommentaryInfo();
	void EditCommentary(string newCommentaryText);
	User* GetCommentaryAuthor();
	const string& GetText() const;
protected:
	User* nameOfCommentaryAuthor;//Автор комментария
	string textOfCommentary;//Текст коммаентария
	string dateOfCommentary;//Дата написания комментария
	string timeOfCommentary;//Время написания комментария
};
