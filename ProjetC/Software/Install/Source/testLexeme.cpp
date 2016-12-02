#include "./../Header/Lexeme.h"
#include <iostream>

using namespace std;

int main() {

	Lexeme Lex1("Entity");
	Lexeme Lex2(";");
	Lex1.associateType();
	Lex2.associateType();
	cout<< endl << Lex1 << endl;
	cout<< endl << Lex2 << endl;
}
