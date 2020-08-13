#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class cNode
{
	int data;
	cNode *left, *right;
public:
	cNode();
	cNode(int);
	void setData(int);
	void setLeft(cNode*);
	void setRight(cNode*);

	cNode* getLeft();
	cNode* getRight();
	int getData();
};

class BinaryTree
{
	cNode *root;
	cNode* CreateNode(int);
public:
	BinaryTree();
	cNode *GetRoot();
	void AddNode(int);
	void Display();
	void Inorder(cNode*);
	void Preorder(cNode*);
	void Postorder(cNode*);
};




