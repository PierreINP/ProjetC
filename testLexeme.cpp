#include "./../Header/Lexeme.h"
#include <iostream>

using namespace std;

int main() {
	
	cout<< "Test 1 : Associate Type" << endl;
	Lexeme Lex1("Entity");
	Lexeme Lex2(";");
	Lex1.associateType();
	Lex2.associateType();
	cout<< "Name " <<Lex1 << "| Type : " <<Lex1.getType() << endl;
	cout<< "Name "<< Lex2 << "| Type : " <<Lex1.getType() << endl;

	cout << endl << "Test 2 : Opérateur = " << endl;
	Lexeme Lex3("Salut");
	cout << "Avant Lexeme = " << Lex3 << endl;
	cout << Lex3 << " = " << Lex1 <<endl;
	Lex3 = Lex1;
	cout << "Après Lexeme =  " << Lex3 << endl;
}
