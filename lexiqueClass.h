/*
 * lexiqueClass.h
 *
 *  Created on: 25 nov. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef LEXIQUECLASS_H_
#define LEXIQUECLASS_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <map>
#include "wordClass.h"
#include "utilitaire.hpp"

using namespace std;

class lexiqueClass {
private:
	map<string, wordClass*> lexique;
public:
	lexiqueClass(const string& path);
	int checkWord(string newWord);
	void addWord(string newWord);
	void displayWords(void);
	void findWord(string word);
	void eraseWord(string word);
	void numberWords(void);
};

#endif /* LEXIQUECLASS_H_ */
