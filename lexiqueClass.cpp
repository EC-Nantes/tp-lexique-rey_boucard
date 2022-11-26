/*
 * lexiqueClass.cpp
 *
 *  Created on: 25 nov. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "lexiqueClass.h"

lexiqueClass::lexiqueClass(const string& path) {

	string content;
	readFileIntoString(path, content); //stockage du fichier de patch dans content

	char* charContent = &content[0];
	char * pch;

	pch = strtok(charContent," ,.-");

	while (pch != NULL) {

		if (!this->checkWord(pch)){
			this->addWord(pch);
//			cout << pch << endl;
		}
		pch = strtok (NULL, " ,.-\n*(){}[]'_1234567890/:;!?");
	  }

	cout << "fichier totalement charge" << endl;
}

int lexiqueClass::checkWord(string newWord){
	auto it = this->lexique.find(newWord);
	if (it != this->lexique.end()){
		it->second->addNumber();
		return 1;
	}
	return 0;
}

void lexiqueClass::addWord(string newWord){

	wordClass mot(newWord);
	this->lexique.insert(make_pair(newWord,new wordClass(newWord)));

}

void lexiqueClass::findWord(string word){
	auto it = this->lexique.find(word);
	if (it != this->lexique.end()){
		cout << "Word found !" << endl;
		cout << "Word : " << it->second->getName() << endl;
		cout << "Number of calls : " << it->second->getNumber() << endl;
	}else {
		cout << "Could not find the word : " << word << endl;
	}
}

void lexiqueClass::eraseWord (string word){
	auto it = this->lexique.find(word);
	if (it != this->lexique.end()){
		cout << "Word found !" << endl;
		this->lexique.erase(word);
		cout << "Word '" << word << "' erased" << endl;
	}else {
		cout << "Could not find the word : " << word << endl;
	}
}

void lexiqueClass::numberWords(){
	cout << "\e[0;31mNumber of words : " << this->lexique.size() << "\e[0;37m" << endl;
}

ostream& operator<<(ostream& os, const lexiqueClass& lexique){
	os << "Lexique\n";
	auto it=lexique.lexique.begin();
	while (it != lexique.lexique.end()){
		os << it->second->getName() << "\n";
		it++;
	}
	return os;
}