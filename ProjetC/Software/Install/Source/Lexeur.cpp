/*
This programm is here to perform some functions. It must identify the lexemes, compute them to validate their conformity and then give them a type. 
Input : SourceFile.vhd
Output : Data structure
*/

#include"./../Header/Lexeur.h"
#include "./../Header/Lexeme.h"
#define path_size 100


list<Lexeme> readSource(char* file)
{
	std::list<Lexeme> lexeme_list; //list of lexeme, contains list of words
	std::list<Lexeme> my_list; //list of lexeme, contains list of words
	ifstream sourcecode(file); //Input Stream from file named sourcecode 
	string line; //line red in the file

	if (sourcecode == NULL) {
		cout << "Source code : " << file << " can't be openned\n";
		//GESTION D'ERREUR ? flags montés dans une fonction exterieure
	}
	else {
		cout << "Source code openned\n";
		int i;
		while (getline(sourcecode, line)) // reads the line
    		{	
			my_list = split_line(line);
			
		}
	}			
sourcecode.close(); // Closing the input file stream
return my_list;
}

list<Lexeme> split_line(string line) 
{
	std::list<Lexeme> my_list; //list of lexeme, contains list of words

	int size = line.size();
	int r = 0;
	int i;

	//cout << "Line of " << size << " characters" << endl;
	//cout << line << endl;

	for(i = 0; i < size; i++) {
		if(line[i]== 32) {
		     Lexeme word(line.substr(r, i-r));
		     //cout << word.getName() << endl;
		     my_list.push_back(word);
      		     r=i+1;
    		}
  	}
Lexeme fin(line.substr(r, size-r));
my_list.push_back(fin);
return my_list;
}

