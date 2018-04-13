/*
Aisha Qureshi
03/29/17

Using a binary search tree
implement a printPreorder, 
printInorder, printPostorder, 
and findNode member functions

compiles and works
*/

#include<iostream>
#include "BSTree.h"

int main()
{
	BSTree *leaf = new BSTree();	//add numbers to create a binary search tree 
	
	// add
	leaf->addNode(300);			//Root:300
	leaf->addNode(100);			//then add 100
	leaf->addNode(200);			//then add 200
	leaf->addNode(400);			//then add 400
	
	cout << "Preorder print: ";
	leaf->printPreorder(leaf->Root());	//print the preorder 
	cout<< endl;
	
	cout << "Inorder print: ";
	leaf->printInorder(leaf->Root());		//print inorder
	cout << endl;
	
	cout << "Postorder print: ";
	leaf->printPostorder(leaf->Root());		//print post order
	cout << endl;

	leaf->findNode(500, leaf->Root());
	leaf->findNode(600, leaf->Root());
	
	cout << "Min = " << leaf->min(leaf->Root())->Key() << endl;
	cout << "Max = " << leaf->max(leaf->Root())->Key() << endl;
	cout << "Successor to 300 = " << leaf->successor(300, leaf->Root())->Key() << endl;
	cout << "Predecessor to 300 = " << leaf->predecessor(300, leaf->Root())->Key() << endl;
	
	cout << "Deleting 300";
	cout << endl;
	leaf->deleteNode(300);		//delete the 300 from tree
	
	cout << "Preorder print: ";
	leaf->printPreorder(leaf->Root());		//print out the preorder without 300 in the tree
	cout << endl;

	cout << "deleting entire tree pointer" << endl;
	delete leaf;			//delete the tree

	//system("PAUSE");
	return 0;
}

