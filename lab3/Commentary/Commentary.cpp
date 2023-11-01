#include "Commentary.h"
Commentary::Commentary(User* nameOfCommentaryAuthor, string textOfCommentary, string dateOfCommentary, string timeOfCommentary) : nameOfCommentaryAuthor(nameOfCommentaryAuthor), textOfCommentary(textOfCommentary), dateOfCommentary(dateOfCommentary), timeOfCommentary(timeOfCommentary) {}
void Commentary::ShowCommentaryInfo() {
	cout << "Commentary Info: " << endl;
	cout << "Commentary Author: " << nameOfCommentaryAuthor << endl;
	cout << "Commentary Text: " << textOfCommentary << endl;
	cout << "Commentary Date: " << dateOfCommentary << endl;
	cout << "Commentary Time: " << timeOfCommentary << endl;
}
void Commentary::EditCommentary(string newCommentaryText) {
	textOfCommentary = newCommentaryText;
}
User* Commentary::GetCommentaryAuthor() {
	return nameOfCommentaryAuthor;
}
const string& Commentary::GetText() const {
	return textOfCommentary;
}
