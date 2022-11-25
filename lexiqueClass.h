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
#include <string>
#include <vector>
#include "wordClass.h"

using namespace std;

class lexiqueClass {
private:
	vector<wordClass> lexique;
public:
	lexiqueClass();
	int checkWord(string newWord);
};

#endif /* LEXIQUECLASS_H_ */
