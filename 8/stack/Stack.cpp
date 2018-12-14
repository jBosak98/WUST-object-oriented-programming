 #include "Stack.h"

// template< class T >
// Stack<T>::Stack( int s ){ 
// 	size = s > 0 ? s : 10;
// 	top = -1; // Stack is initially empty
// 	stackPtr = new T[ size ]; // allocate space for elements
// }

// template< class T >
// bool Stack< T >::push( const T &pushValue ){ 
// 	if (!isFull()){
// 		stackPtr[ ++top ] = pushValue; // place item in Stack
// 		return true; // push successful
// 	}
// 	return false; // push unsuccessful
// } 


// template< class T >
// bool Stack< T >::pop( T &popValue ) {
// 	if (!isEmpty()) {
// 		popValue = stackPtr[ top-- ]; // remove item from Stack
//  		return true; // pop successful
//  	}
//  	return false; // pop unsuccessful
// }