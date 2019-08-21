#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

void func();
int nGap(int);
void sort(int*, int);

int main()
{
	func();
	system("pause");
	return 0;
}

void func()
{
	srand(time(0));
	int N, grap;
	cin >> N;
	int *arr = new int[N];
	for (size_t i = 0; i < N; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << " ";
	}
	cout << endl;
	int *a = new int[N];
	for (size_t i = 0, j = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0)
		{
			a[j] = arr[i];
			j++;
		}
	}
	sort(a, N);
	for (size_t i = 0, j = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = a[j];
			j++;
		}
	}
	for (size_t z = 0; z < N; z++)
		cout << arr[z] << " ";
	cout << endl;
}

int nGap(int ngap)
{
	ngap /= 1.3;
	if (ngap == 9 || ngap == 10)
		ngap = 11;
	if (ngap < 1)
		return 1;
	return ngap;
}

void sort(int* a, int length)
{
	int gap = length;
	bool swap;
	do
	{
		swap = false;
		gap = nGap(gap);
		for (int i = 0; i < length - gap; ++i)
		{
			if (a[i] < a[i + gap])
			{
				int temp = a[i];
				a[i] = a[i + gap];
				a[i + gap] = temp;
				swap = true;
			}
		}
	} while (gap > 1 || swap);
}
