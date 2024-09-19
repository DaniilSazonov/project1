/* Sazonov Daniil Ivanovich  st135860@student.spbu.ru  "project1"*/

#include <iostream>
#include <string>
#include "headers.h"

using namespace std;

string hi;

int main() {
	hello();
	cout<<endl;
	string subh = hi.substr(0, 7);
	string imia;
	while (true){
		getline(cin, imia);
		cout <<  subh << imia << "!" << endl;
		if (imia == "close") {break;
		}
	}
	return 0;
}
