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
		pch = strtok (NULL, " ,.-\n*(){}[]'_1234567890/:");
	  }

	cout << "fichier totalement charge" << endl;

}

int lexiqueClass::checkWord(string newWord){
	for (wordClass& x : this->lexique){
		if (x.sameWord(newWord)){
			x.addNumber();
			return 1;
		}
	}
	return 0;
}

void lexiqueClass::displayWords(void){
	for (wordClass& x : this->lexique){
		cout << x.getName() << endl;
	}
}

void lexiqueClass::addWord(string newWord){

	wordClass mot(newWord);
	this->lexique.push_back(mot);

}
