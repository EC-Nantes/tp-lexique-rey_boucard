// Your First C++ Program

#include <iostream>
#include <fstream>
#include <string>
#include "utilitaire.hpp"

using namespace std;

int main() {

	string content = "";
	string path = "tp1-Lexique-fichier/lesMiserables_A.txt";
	readFileIntoString(path, content);

	cout << content << endl;

    std::cout << "Hello World!";
    std::cout << "Hello World!";
    return 0;
}
