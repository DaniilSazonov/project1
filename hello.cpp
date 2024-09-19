/* Sazonov Daniil Ivanovich  st135860@student.spbu.ru  "project1"*/

#include <iostream>
#include <string>

using namespace std;

extern string hi;

void hello() {
	hi = "Hello, World!";
	cout << hi;
}
