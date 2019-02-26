#pragma once

template <class T>
void DecisionTree::displayInOrder() const
{
	displayInOrder(root);
}

template<class T>
void DecisionTree<T>::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	if (nodePtr == nullptr)
	{
		nodePtr = newNode;
	}
	else if (newNode->value < nodePtr->value)
	{
		insert(nodePtr->left, newNode);
	}
	else
	{
		insert(nodePtr->right, newNode);
	}
}

template <class T>
void DecisionTree<T>::insertNode(T item)
{
	TreeNode *newNode = nullptr;

	newNode = new TreeNode;
	newNode->value = item;
	newNode->left = newNode->right = nullptr;

	insert(root, newNode);
}

template<class T>
void DecisionTree<T>::destroySubTree(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left) { destroySubTree(nodePtr->left); }
		if (nodePtr->right) { destroySubTree(nodePtr->right); }
		delete nodePtr;
	}
}

template<class T>
bool DecisionTree<T>::searchNode(T item)
{
	TreeNode *nodePtr = root;

	while (nodePtr)
	{
		if (nodePtr->value == item)
		{
			return true;
		}
		else if (item < nodePtr->value)
		{
			nodePtr = nodePtr->left;
		}
		else
		{
			nodePtr = nodePtr->right;
		}
	}
	return false;
}

template <class T>
void DecisionTree<T>::remove(T item)
{
	deleteNode(item, root);
}

template <class T>
void DecisionTree<T>::deleteNode(T item, TreeNode *&nodePtr)
{
	if (item < nodePtr->value)
	{
		deleteNode(item, nodePtr->left);
	}
	else if (item > nodePtr->value)
	{
		deleteNode(item, nodePtr->right);
	}
	else
	{
		makeDeletion(nodePtr);
	}
}

template <class T>
void DecisionTree<T>::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode *tempNodePtr = nullptr;

	if (nodePtr == nullptr)
	{
		cout << "Cannot delete empty node.\n";
	}
	else if (nodePtr->right == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;
		delete tempNodePtr;
	}
	else if (nodePtr->left == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
	else
	{
		tempNodePtr = nodePtr->right;

		while (tempNodePtr->left)
		{
			tempNodePtr = tempNodePtr->left;
		}
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;

		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

template <class T>
void DecisionTree<T>::displayInOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}
