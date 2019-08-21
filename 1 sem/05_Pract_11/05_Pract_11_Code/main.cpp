#include "stdafx.h"
#include <iostream>

using namespace std;

void func();
void inp(int **);
int findmin(int **);
int findmax(int **);
void move(int **, int, int);
void outp(int **);


int main()
{
	func();
	system("pause");
	return 0;
}

void func()
{
	int **arr = new int *[5];
	for (size_t i = 0; i < 5; i++)
		arr[i] = new int[5];

	inp(arr);
	move(arr, findmin(arr), findmax(arr));
	outp(arr);

	for (size_t i = 0; i < 5; i++)
		delete[]arr[i];
	delete[]arr;
}

void inp(int **a)
{
	for (size_t i = 0; i < 5; i++)
		for (size_t j = 0; j < 5; j++)
			cin >> a[i][j];
	cout << endl;
}

int findmin(int **a)
{
	int min = 0, minp = 0;
	for (size_t i = 0; i < 5; i++)
		for (size_t j = 0; j < 5; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
				minp = j;
			}
		}
	return minp;
}

int findmax(int **a)
{
	int max = a[0][0], maxp = 0;
	for (size_t i = 0; i < 5; i++)
		for (size_t j = 0; j < 5; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				maxp = j;
			}
		}
	return maxp;
}

void move(int **a, int minp, int maxp)
{
	int temp;
	for (size_t i = 0; i < 5; i++)
	{
		temp = a[i][minp];
		a[i][minp] = a[i][maxp];
		a[i][maxp] = temp;
	}
}

void outp(int **a)
{
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}