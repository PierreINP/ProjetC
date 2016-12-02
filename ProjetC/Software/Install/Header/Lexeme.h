#ifndef _LEXEME_H_
#define _LEXEME_H_

#include <string>
#include <sstream>

using namespace std;


class Lexeme {
private:
	string name;
	string type;
public:

    Lexeme(string nameLexeme);    	
    ~Lexeme() {}    					

    //Accesseurs
    const string & getName() const;
    string getType() const;

    //Modifieurs
    void setName(const string & nomLexeme);	

    //Methodes
    void associateType();
    //bool Lexeme::checkID(const string & name);
    string toString() const;

    //Fonctions amies
    friend ostream& operator<<(ostream& out, const Lexeme &l);
};

#endif
