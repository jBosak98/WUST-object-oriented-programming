#include "test.h"



void startTest(){
	testConstructor();
	testScalarProduct();
	std::cout<<"WELL DONE"<<"\n";
}

void testConstructor(){
	SparseVector v = SparseVector("32 56");
	assert(v.head->value == 32);
	assert(v.head->next->value == 56);
	assert(v.head->next->next == NULL);
	assert(v.orderVector == 3);

	SparseVector v2 = SparseVector("15");
	assert(v2.head->value == 15);
	assert(v2.head->next == NULL);
	assert(v2.orderVector == 1);

	SparseVector v3 = SparseVector("");
	assert(v3.head->value == 0);
	assert(v3.head->next == NULL);
	assert(v3.orderVector == 0);

	SparseVector v4 = SparseVector("0 0 3");
	assert(v4.head->value == 3);
	assert(v4.orderVector == 4);

	SparseVector v5 = SparseVector("0 0 0 5");
	assert(v5.head->value == 5);
	assert(v5.orderVector == 8);

	SparseVector v6 = SparseVector("0 3 0 0 6");
	assert(v6.head->value == 3);
	assert(v6.head->next->value == 6);
	assert(v6.orderVector == 18);
}

void testScalarProduct(){
	SparseVector v = SparseVector("32 56");
	SparseVector v2 = SparseVector("6 0");
	assert(v.scalarProduct(&v2) == 32 * 6);

	SparseVector v4 = SparseVector("32");
	SparseVector v5 = SparseVector("6");
	assert(v4.scalarProduct(&v5) == 32 * 6);

	SparseVector v7 = SparseVector("3 0 5");
	SparseVector v8 = SparseVector("1 2 0");
	assert(v7.scalarProduct(&v8) == 3*1);

	SparseVector v10 = SparseVector("3 0 6");
	SparseVector v11 = SparseVector("1 0 0");
	assert(v10.scalarProduct(&v11) == 3);

	SparseVector v12 = SparseVector("3 2 2 6 0");
	SparseVector v13 = SparseVector("1 1 5 0 3");
	assert(v12.scalarProduct(&v13) == 3+2+10);

	SparseVector v14 = SparseVector("3 2 2 6 0 2");
	SparseVector v15 = SparseVector("1 1 5 0 3 2");
	assert(v14.scalarProduct(&v15) == 3+2+10+4);

	SparseVector v16 = SparseVector(" 0 0 0 0  0");
	SparseVector v17 = SparseVector(" 0 0 0 3 4");
	assert(v16.scalarProduct(&v17) == 0);

	SparseVector v18 = SparseVector(" ");
	SparseVector v19 = SparseVector(" 0 0 0 3 4");
	assert(v18.scalarProduct(&v19) == 0);

	SparseVector v20 = SparseVector("1 ");
	SparseVector v21 = SparseVector("1 0 0 3 4");
	assert(v20.scalarProduct(&v21) == 0);

	SparseVector v22 = SparseVector("0 0 3 4 0");
	SparseVector v23 = SparseVector("0 0 0 7 11");
	assert(v22.scalarProduct(&v23) == 28);

	SparseVector v24 = SparseVector("0 0 a 4 0");
	SparseVector v25 = SparseVector("0 0 0 7 11");
	assert(v24.scalarProduct(&v25) == 0);

}