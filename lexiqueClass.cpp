/*
 * lexiqueClass.cpp
 *
 *  Created on: 25 nov. 2022
 *      Author: mrey5
 */


#include "lexiqueClass.h"

lexiqueClass::lexiqueClass() {
	// TODO Auto-generated constructor stub

}



lexiqueClass::~lexiqueClass() {
	// TODO Auto-generated destructor stub
}


void lexiqueClass::setName(string name){
	this->name = name;
}

void lexiqueClass::setNumber(int number){
	this->number = number;
}

string lexiqueClass::getName(void){
	return this->name;
}

int lexiqueClass::getNumber(void){
	return this->number;
}
