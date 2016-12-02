#include "./../Header/Lexeme.h"
#include "./../syntaxConstraints.h"
#include <iostream>

using namespace std;
    
    Lexeme::Lexeme():name("") {}

    Lexeme::Lexeme(string nameLexeme){
	int i;
	// Minimaze every character of the lexeme string, to have a standard base for futur computing
	for(int i = 0; nameLexeme[i] != '\0'; i++){
        	if (nameLexeme[i]  >= 65 &&  nameLexeme[i] <= 90){
			nameLexeme[i] = nameLexeme[i] + 32; // 32 is the offset between Maj and Miin in ASCII table
		}
	}
	name = nameLexeme;
    }

    //Accesseurs
    const string & Lexeme::getName() const{
        return name;
    }

    string Lexeme::getType() const{
        return type;
    }

    //Modifieurs
    void Lexeme::setName(const string & nomLexeme){
    	name = nomLexeme;
    }	
	

    //Methodes
    void Lexeme::associateType(){
	//cout << "dans associateType : "<< name << endl;
				
	for(int i = 0; i < N ; i++){	
		if(name == keywordList[i]){
			//cout<< "dans Keyword" << endl; 
			type = "keyword";
			break;
		}
		else if (name == specialList[i]){
			//cout<< "dans Special" << endl; 
			type = "special";
			break;
		}
		else if (name == operatorList[i]){
			//cout<< "dans Special" << endl; 
			type = "special";
			break;
		}
		else{
			
		}
	}	
    }

    void Lexeme::operator=(const string & b){
	this->setName(b);
}

    string Lexeme::toString() const { 
	stringstream info;
	info <<getName();   
	return info.str();
}

    //Fonctions amies
    ostream& operator<<(ostream& out, const Lexeme &l){
	out << l.toString();
	return out;
}


    

