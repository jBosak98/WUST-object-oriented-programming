#ifndef NODE_HEADER
#define NODE_HEADER

#include <iostream>

template<class T>
class Node{
public:
	T value;
	
	Node *prev;
	
	Node(T &value){
		this->value = value;
	}

};

#endif