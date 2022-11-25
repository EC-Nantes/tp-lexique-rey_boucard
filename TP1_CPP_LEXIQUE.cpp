// Your First C++ Program

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "utilitaire.hpp"
#include "lexiqueClass.h"

using namespace std;

int main() {

	string content = "";
	string path = "tp1-Lexique-fichier/lesMiserables_A.txt";
	//readFileIntoString(path, content);
    string test = "Salut,Romain";
    cout << test << endl;
    remove_punctuation(test);
    cout << test << endl;

	cout << content << endl;

    std::cout << "Hello World!";
    std::cout << "Hello World!" << endl;

    lexiqueClass classe;
    classe.setName("Romain");
    classe.setNumber(15);
    cout << classe.getName() << endl;
    cout << classe.getNumber() << endl;
    vector<lexiqueClass> TestClasse;
    TestClasse.push_back(classe);
    cout << "Vector" << endl;
    cout << TestClasse[0].getName() << endl;
    cout << TestClasse[0].getNumber() << endl;
    return 0;
}
