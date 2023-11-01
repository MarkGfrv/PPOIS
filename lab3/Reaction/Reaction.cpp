#include "Reaction.h"
Reaction::Reaction(string reactionType, User* reactionAuthor, string dateOfReaction, string timeOfReaction) : reactionType(reactionType), reactionAuthor(reactionAuthor), dateOfReaction(dateOfReaction), timeOfReaction(timeOfReaction) {}
void Reaction::ShowReactionInfo() {
	cout << "Reaction Info: " << endl;
	cout << "Reaction type: " << reactionType << endl;
	cout << "Reaction Date: " << dateOfReaction << endl;
	cout << "Reaction Time: " << timeOfReaction << endl;
}
void Reaction::ChangeReactionType(string newReactionType) {
	reactionType = newReactionType;
}
void Reaction::RemoveReaction() {//Метод по удалению реакции
	if (reactionList != nullptr) {
		auto it = find(reactionList->begin(), reactionList->end(), this);
		if (it != reactionList->end()) {
			// Удаляем объект реакции из списка
			reactionList->erase(it);
		}
	}
}
User* Reaction::GetReactionAuthor() {
	return reactionAuthor;
}
const string& Reaction::GetReactionType() const {
	return reactionType;
}
void Reaction::SetReactionList(vector<Reaction*>* list) {
	reactionList = list;
}
