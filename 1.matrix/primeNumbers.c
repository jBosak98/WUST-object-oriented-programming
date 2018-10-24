#include <stdio.h>
#include <stdlib.h>

void checkIfPrime(int number){
	for (int i = 2; i < number/2+1 ; i++){
		if (number%i == 0){
                    return;
		}
	}
	printf("%d\n",number );
}


void findPrimeNumbers(int from, int to){
	int i;
	if(from > to){
		int tmp = to;
		to = from;
		from = tmp;
	}
	if(from < 0){
		puts("WRONG! Input is below zero!");
		exit(1);
	}
	for(i = from; i < to; i++){
		checkIfPrime(i);
	}
}
int loadInt(){
	int x = 0;
	if(scanf("%d", &x) == 0){
		puts("WRONG INPUT");
		exit(1);
	}
	return x;
}
int
main(){
	puts("write the bottom boundary of prime number");
	int from = loadInt();
	puts("write the upper boundary of prime number");
	int to = loadInt();

	findPrimeNumbers(from, to);
	return 0;
}
