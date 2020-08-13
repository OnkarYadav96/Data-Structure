#include"Node.h"

cNode::cNode()
{
	data = 1;
	left = NULL;
	right = NULL;
}

cNode::cNode(int data)
{
	this->data = data;
}

void cNode::setData(int data)
{
	this->data = data;
}

void cNode::setLeft(cNode* left)
{
	this->left = left;
}

void cNode::setRight(cNode* right)
{
	this->right = right;
}

int cNode::getData()
{
	return data;
}

cNode* cNode::getLeft()
{
	return left;
}

cNode* cNode::getRight()
{
	return right;
}


BinaryTree::BinaryTree()
{
	root = NULL;
}

cNode* BinaryTree::CreateNode(int data)
{
	cNode* record;
	record = new cNode;
	record->setData(data);
	record->setLeft(NULL);
	record->setRight(NULL);
	return record;
}


cNode* BinaryTree::GetRoot()
{
	return root;
}

void BinaryTree::AddNode(int data)
{
	cNode *newnode, *move;
	char  ch;
	newnode = CreateNode(data);

	if (root == NULL)
	{
		root = newnode;
		cout << "\n\n\t Node is attach to RootNode succesfully.";
	}
	else
	 {
		move = root;  //infinite loop
		while (1)
		{
			cout << "\n\n\t Choose new node want to add Left(L) or Right(R) : ";
			move->getData();
			cin >> ch;

			if (ch == 'r' || ch == 'R')
			{
				if (move->getRight() == NULL)
				{
					move->setRight(newnode);
					cout << "\n\n\t New node is attached to right of " << move->getData();
					break;
				}
				else
				{
					move = move->getRight();
				}
			}

			else if (ch == 'L' || ch == 'r')
			{
				if (move->getLeft() == NULL)
				{
					move->setRight(newnode);
					cout << "\n\n\t New node is attached to left of " << move->getData();
					break;
				}
				else
					move = move->getLeft();
			}

			else
				cout << "\n\n\t Wrong option Entered..!!\n\n";
		}
	}
}

void BinaryTree::Inorder(cNode* i)
{
	if (i != NULL)
	{
		Inorder(i->getLeft());
		cout << " " << i->getData();
		Inorder(i->getRight());
	}
	return;
}

void BinaryTree::Preorder(cNode* p)
{
	if (p != NULL)
	{
		cout <<" "<< p->getData();
		Preorder(p->getLeft());
		Preorder(p->getRight());
	}
	return;
}

void BinaryTree::Postorder(cNode* po)
{
	if (po != NULL)
	{
		Postorder(po->getLeft());
		Postorder(po->getRight());
	    cout <<" "<< po->getData();
    }
	return;
}

void BinaryTree::Display()
{
	cout << "\n\n\t ********** Inorder ****************\n";
	Inorder(GetRoot());

	cout << "\n\n\t ********** Preorder ****************\n";
	Preorder(GetRoot());

	cout << "\n\n\t ********** Postorder ****************\n";
	Postorder(GetRoot());

}