#include "Account.h"
#include <iostream>



int
main(){
	int size = 0;
	std::cin>>size;
	Account *a[size];
	for(int i = 0; i< size;i++){
		a[i] = new Account();
	}

	for(int i = 0; i< size;i++){
		delete a[i];
	}
	return 0;
}
