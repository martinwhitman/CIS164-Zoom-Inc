#pragma once
#include <iostream>
using namespace std;

class DecisionTree
{
private:
	struct TreeNode
	{
		T value;
		TreeNode *left;
		TreeNode *right;
	};

	TreeNode *root;

	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(T, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	//void displayPreOrder(TreeNode *) const;
	//void displayPostOrder(TreeNode *) const;

public:
	//Constructor
	DecisionTree() { root = nullptr; }

	//Destructor
	~DecisionTree() { destroySubTree(root); }

	void insertNode(T);
	bool searchNode(T);
	void remove(T);

	void displayInOrder() const
};

