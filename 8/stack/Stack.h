#ifndef STACK_HEADER
#define STACK_HEADER

#include <iostream>

template< class T >
class Stack {
public:
	Stack(int s){ // default constructor (stack size 10)
		size = s > 0 ? s : 10;
		top = -1; // Stack is initially empty
		stackPtr = new T[size]; // allocate space for elements
	}
	

	~Stack() {
		delete [] stackPtr;
	} // destructor
	

	bool push( const T &value){ // push an element onto the stack
		if (!isFull()){
			stackPtr[++top] = value; // place item in Stack
			return true; // push successful
		}
		return false; // push unsuccessful
	}


	bool pop(T &popValue){ // pop an element off the stack
		if (!isEmpty()) {
			popValue = stackPtr[top--]; // remove item from Stack
			return true; // pop successful
		}
		return false; // pop unsuccessful
	}

	void show(){
		for(int i = 0;i<=top;i++){
			std::cout<<stackPtr[i]<<", ";
		}
		std::cout<<"\n";
	}


private:
	int size; // # of elements in the stack
	
	int top; // location of the top element
	
	T *stackPtr; // pointer to the stack
	
	bool isEmpty() const { 
		return top == -1; 
	} // utility

	
	bool isFull() const {
		return top == size - 1; 
	} // functions
}; 


#endif