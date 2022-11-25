/*
 * wordClass.h
 *
 *  Created on: 25 nov. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef WORDCLASS_H_
#define WORDCLASS_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class wordClass {
private:
	string name;
	int number;
public:
	wordClass(string name);
	void setName(string name);
	void setNumber(int number);
	string getName(void);
	int getNumber(void);
	void addNumber(void);
};

#endif /* WORDCLASS_H_ */
