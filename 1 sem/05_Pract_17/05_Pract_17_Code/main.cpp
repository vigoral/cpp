#include "stdafx.h"
#include <iostream>

using namespace std;

struct tree
{
	int key;
	tree *left, *right;
};

void inp(tree *&root)
{
	int N;
	cout << "N = "; cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		int key;
		cin >> key;
		add(root, key);
	}
}

void add(tree *&root, int key)
{
	if (root == NULL)
	{
		root = new tree;
		root->key = key;
		root->left = root->right = NULL;
	}
	if (key < root->key)
	{
		if (root->left != NULL)
			add(root->left, key);
		else
		{
			root->left = new tree;
			root->left->left = root->left->right = NULL;
			root->left->key = key;
		}
	}
	if (key > root->key)
	{
		if (root->right != NULL)
			add(root->right, key);
		else
		{
			root->right = new tree;
			root->right->left = root->right->right = NULL;
			root->right->key = key;
		}
	}
}

void show(tree *&root)
{
	if (root != NULL)
	{
		show(root->left);
		cout << root->key << "\t";
		show(root->right);
	}
}

void del(tree *&root)
{
	if (root != NULL)
	{
		del(root->left);
		del(root->right);
		delete root;
		root = NULL;
	}
}

void search(tree *&root, int a, int b)
{
	if (root != NULL)
	{
		if (root->key == a && root->left != NULL)
			if (root->left->key == b)
				cout << "YES" << endl;
		if (root->key == a && root->right != NULL)
			if (root->right->key == b)
				cout << "YES" << endl;
		search(root->left, a, b);
		search(root->right, a, b);
	}
}

int main()
{
	tree *root = NULL;
	inp(root);
	show(root);
	cout << endl;
	int A, B;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	search(root, A, B);
	del(root);
	system("pause");
	return 0;
}

