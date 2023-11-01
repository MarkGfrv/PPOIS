#pragma once
#include "User.h"
class Reaction {
public:
	Reaction(string reactionType, User* reactionAuthor, string dateOfReaction, string timeOfReaction);
	void ShowReactionInfo();
	void ChangeReactionType(string newReactionType);
	void RemoveReaction();
	User* GetReactionAuthor();
	const string& GetReactionType() const;
	void SetReactionList(vector<Reaction*>* list);
protected:
	string reactionType;//Тип реакции (Лайк или репост)
	User* reactionAuthor;//Автор реакции
	string dateOfReaction;//Дата реакции
	string timeOfReaction;//Время реакции
	vector<Reaction*>* reactionList;//Список реакции для публикации
};
