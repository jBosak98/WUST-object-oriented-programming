#ifndef STACK_HEADER
#define STACK_HEADER

#include <iostream>
#include "Node.h"


template< class T >
class Stack {
public:
	Node<T> *top;

	Stack(){
		top = NULL;
	}

	bool push(T &value){
		if(top == NULL){
			top = new Node<T>(value);
			top->prev = NULL;
			return true;
		}
		Node<T> *n = new Node<T>(value);
		n->prev = top;
		top = n;
		return true;

	}

	bool pop(T &popValue){
		if (!isEmpty()) {
			Node<T> *tmp = top;
			popValue = tmp->value;
			top = top->prev;
			tmp->prev = NULL;
			delete tmp;
			return true;
		}
		return false;
	}

	bool isEmpty() const { 
		return top == NULL; 
	}

	void show(){
		show(top);
	}
private:
	void show(Node<T> *n){
		if(n != NULL){
			std::cout<<n->value.value<<", ";
			show(n->prev);
		}

	}
}; 


#endif