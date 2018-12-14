#include "test.h"
#include <iostream>
#include "Tree.h"
#include <cassert>




void testTree(){
	std::cout<<"TEST START";
	
	testTheSameElements();

	testInt();
	
	testString();
}

void testTheSameElements(){
	Tree<int> *tmp = new Tree<int>(4);
	assert(tmp->head->value = 4);

	tmp->insertElement(4);
	assert(tmp->head->left == NULL);
	assert(tmp->head->right == NULL);

	tmp->insertElement(3);
	tmp->insertElement(3);
	tmp->insertElement(4);
	assert(tmp->head->left != NULL);
	assert(tmp->head->right == NULL);
	assert(tmp->head->left->value == 3);
	assert(tmp->head->left->left == NULL);
	assert(tmp->head->left->right == NULL);
}


void testString(){
	Tree<std::string> *treeString = new Tree<std::string>("a");
	treeString->insertElement("b");
	treeString->insertElement("c");
	treeString->insertElement("d");
	treeString->insertElement("f");
	treeString->insertElement("e");
	treeString->insertElement("g");

	assert(treeString->head->value == "a");
	assert(treeString->head->right->value == "b");
	assert(treeString->head->right->right->value == "c");
	assert(treeString->head->right->right->right->value == "d");
	assert(treeString->head->right->right->right->right->value == "f");
	assert(treeString->head->right->right->right->right->left->value == "e");

	treeString->show();
}

void testInt(){
	Tree<int> *treeInt = new Tree<int>(5);
	assert(treeInt->head->value == 5);
	assert(treeInt->head != NULL);

	treeInt->insertElement(3);
	assert(treeInt->head->left->value == 3);

	treeInt->insertElement(7);
	assert(treeInt->head->right != NULL);
	assert(treeInt->head->right->value == 7);

	treeInt->insertElement(8);
	assert(treeInt->head->right->right != NULL);
	assert(treeInt->head->right->right->value == 8);

	treeInt->insertElement(6);
	assert(treeInt->head->right->left->value == 6);

	treeInt->insertElement(2);
	assert(treeInt->head->left->left->value == 2);

	treeInt->insertElement(1);
	assert(treeInt->head->left->left->left->value == 1);

	treeInt->insertElement(4);
	assert(treeInt->head->left->right->value == 4);


	treeInt->show();
}