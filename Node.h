#ifndef NODE_H
#define NODE_H

#include <vector>

using namespace std;

class Node {
private:
	vector <Node*> enfants;
	int value;
	//Lexeme* type;
public:
	Node();
	virtual ~Node();

//methods
	void addSon(const *Node enfant);
	//bool hasNext();

//accessors
	//Node* getNext();
	int getValue();
	//int getLexeme();

//Modifiers 
	//void setNext(Node* newNext);
	void setValue(int val);
	//void setLexeme(Lexeme* type);
};

#endif 
