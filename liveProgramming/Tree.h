#ifndef TREE_HEADER
#define TREE_HEADER

#include <iostream>
#include "TreeElement.h"

template<class T>
class Tree {
public:
	TreeElement<T> *head;

	Tree(T value){
		head = new TreeElement<T>();
		head->value = value;
	}
	TreeElement<T>* insert(T key, TreeElement<T> *node){
		if(key < node->value && node->left != NULL)
			node = insert(key,node->left);
		if(key > node->value && node->right != NULL)
			node = insert(key, node->right);
		
		return node;
	}
	

	void insertElement(T key){
		TreeElement<T> *node = head;
		node = insert(key, node);

		TreeElement<T> *newNode = new TreeElement<T>();
		newNode->value = key;
		if(key > node->value)
			node->right = newNode;
		if(key < node->value)
			node->left = newNode;	
	}
	void show(){
		std::cout<<"\n\n"<<head->value;
		showTree(head,0);
	}
private:

	void showTree(TreeElement<T> *node,int height){

		if(node == NULL){
			return;
		}
		height++;
		if(node->left != NULL){
			std::cout<<"\n";
			for(int i = 0; i<height;i++){
					std::cout<<"	";
			}
			std::cout<<node->left->value;
		}
		showTree(node->left,height);

		if(node->right != NULL){
			std::cout<<"\n";
			for(int i = 0; i<height;i++){
					std::cout<<"	";
			}
			std::cout<<node->right->value;
		}
		showTree(node->right,height);
	}

};


#endif