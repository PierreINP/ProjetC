#include "./../Header/Lexeme.h"
#include "./../syntaxConstraints.h"
#include <iostream>

using namespace std;
	
    Lexeme::Lexeme(string nameLexeme){
	int i;
	for(int i = 0; nameLexeme[i] != '\0'; i++){
        	if (nameLexeme[i]  >= 65 &&  nameLexeme[i] <= 90){
			nameLexeme[i] = nameLexeme[i] + 32;
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

    string Lexeme::toString() const { 
	stringstream info;
	info << "lexeme : " << getName() << endl
	     << "type : " << getType()<< endl;	   
	return info.str();
}

    //Fonctions amies
    ostream& operator<<(ostream& out, const Lexeme &l){
	out << l.toString();
	return out;
}

    

