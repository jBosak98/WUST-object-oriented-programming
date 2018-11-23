#include "SparseVector.h"

SparseVector::SparseVector(std::string vector){
	std::istringstream ss(vector);
	this->orderVector = 0;
	int index = insertHead(&ss);

	VectorElement *e;
	VectorElement *current;
	current = this->head;

	int value = 0;
	for(index; ss>>value; index++){
		if(value != 0){
			e = new VectorElement();
			e->value = value;
			orderVector+= pow(2,index);
			current->next = e;
			current = e;
		}
	}
	this->length = index;
}

int SparseVector::insertHead(std::istringstream *stream){
	this->head = new VectorElement();
	int i = 0;
	int value = 0;
	while(value == 0 && *stream>>value){
		i++;
	}
	orderVector = pow(2,i-1);
	this->head->value = value;
	this->head->next = NULL;
	return i;
}

int SparseVector::scalarProduct(SparseVector *secondVector){
	int result = 0;
	if(this->length != secondVector->length) return result;
	VectorElement *el1 = this->head;
	VectorElement *el2 = secondVector->head;
	bool elementInFirstVector = false;
	bool elementInSecondVector = false;

	for(int i = 0; pow(2,i) <= this->orderVector || pow(2,i) <= secondVector->orderVector; i++){
		elementInFirstVector = valueExist(this->orderVector,i);
		elementInSecondVector = valueExist(secondVector->orderVector,i);

		if(elementInFirstVector && elementInSecondVector)	result += el1->value * el2->value;
		if(elementInFirstVector)	el1 = el1->next;
		if(elementInSecondVector)	el2 = el2->next;
	}
	return result;
}

bool SparseVector::valueExist(int orderVector, int i){
	return orderVector% ((int) pow(2, i + 1)) >= pow(2, i);
}