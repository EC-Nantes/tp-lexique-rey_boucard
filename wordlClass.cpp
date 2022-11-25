/*
 * wordClass.cpp
 *
 *  Created on: 25 nov. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "wordClass.h"

wordClass::wordClass(string name) {
	// TODO Auto-generated constructor stub
    this->name = name;
    this->number = 1;
}


void wordClass::setName(string name){
	this->name = name;
}

void wordClass::setNumber(int number){
	this->number = number;
}

string wordClass::getName(void){
	return this->name;
}

int wordClass::getNumber(void){
	return this->number;
}

void wordClass::addNumber(void){
	this->number += 1;
}
