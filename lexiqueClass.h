/*
 * lexiqueClass.h
 *
 *  Created on: 25 nov. 2022
 *      Author: mrey5
 */

#ifndef LEXIQUECLASS_H_
#define LEXIQUECLASS_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class lexiqueClass {
private:
	string name;
	int number;
public:
	lexiqueClass();
	virtual ~lexiqueClass();
	void setName(string name);
	void setNumber(int number);
	string getName(void);
	int getNumber(void);
};

#endif /* LEXIQUECLASS_H_ */
