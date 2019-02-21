// DecisionTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "DecisionTree.h"
#include <string>
using namespace std;

const int NUM_ROOMS = 5;

int main()
{
	string testMonsterNames;

	DecisionTree<string> tree;

	for (int count = 0; count < NUM_ROOMS; count++)
	{
		cout << "Enter a monster Name: ";
		cin >> testMonsterNames;
		tree.insertNode(testMonsterNames);
	}

	cout << "\nHere are the monster names in the tree:\n";
	tree.displayInOrder();
	return 0;
}
