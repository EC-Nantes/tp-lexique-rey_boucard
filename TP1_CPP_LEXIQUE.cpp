// Your First C++ Program

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <map>
#include "utilitaire.hpp"
#include "lexiqueClass.h"

using namespace std;

int main() {

	string content = "";
	string path = "lesMiserables_A.txt";
	//readFileIntoString(path, content);
    string test = "Salut,Romain";
    cout << test << endl;
    remove_punctuation(test);
    cout << test << endl;

	cout << content << endl;

    std::cout << "Hello World!";
    std::cout << "Hello World!" << endl;

    /*lexiqueClass classe;
    classe.setName("Romain");
    classe.setNumber(15);
    cout << classe.getName() << endl;
    cout << classe.getNumber() << endl;
    vector<lexiqueClass> TestClasse;
    TestClasse.push_back(classe);
    cout << "Vector" << endl;
    cout << TestClasse[0].getName() << endl;
    cout << TestClasse[0].getNumber() << endl;*/

    /*char str[] ="- This, a sample string.";
    char str1[] =", Date. truc";
    char * pch;
    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = strtok (str," ,-.");
    cout << pch << endl;
    pch = strtok (str1," ,-.");
    cout << pch << endl;
    pch = strtok (NULL, " ,-.");
    cout << pch << endl;
    pch = strtok (NULL, " ,-."); //Element suivant de la chaine de caractères, premier parametre : chaine stockée en mémoire à séparer
    cout << pch;*/

    /*string str = "SaluT, RomAIn";
    cout << str << endl;
    toLower(str);
    cout << str << endl;*/

    /*map<string, wordClass*> lexique;
    wordClass mot("Romain");
    lexique.insert(make_pair("Romain",new wordClass("Romain")));
    //lexique.find("Romain");
    if (lexique.find("Romain") != lexique.end()){
        cout << "trouve" << endl;
    }else {
        cout << "pas trouve" << endl;
    }*/

    lexiqueClass lexique(path);
    lexique.findWord("with");
    lexique.findWord("romain");
    lexique.eraseWord("with");
    lexique.findWord("with");

    return 0;
}
