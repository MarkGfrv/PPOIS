#include "Publication.h"
Publication::Publication(User* nameOfPublicationAuthor, string dateOfPublication, string timeOfPublication) : nameOfPublicationAuthor(nameOfPublicationAuthor), dateOfPublication(dateOfPublication), timeOfPublication(timeOfPublication) {}
void Publication::ShowPublicationInfo() {
	cout << "Publication Info: " << endl;
	cout << "Publication Author: " << nameOfPublicationAuthor << endl;
	cout << "Publication Date: " << dateOfPublication << endl;
	cout << "Publication time: " << timeOfPublication << endl;
}
User* Publication::GetPublicationAuthor() {
	return nameOfPublicationAuthor;
}
