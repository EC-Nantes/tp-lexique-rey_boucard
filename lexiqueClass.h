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
#include "wordClass.h"
#include "utilitaire.hpp"

using namespace std;

class lexiqueClass {
private:
	vector<wordClass> lexique;
public:
	lexiqueClass(const string& path);
	int checkWord(string newWord);
	void addWord(string newWord);
	void displayWords(void);
};

#endif /* LEXIQUECLASS_H_ */
