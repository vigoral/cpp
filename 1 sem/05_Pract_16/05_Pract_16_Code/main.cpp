#include "stdafx.h"
#include <iostream>

using namespace std;

struct stack
{
	int data;
	stack *next;
}*head;

void func();
void push(stack **, int);

int main()
{
	func();
	system("pause");
	return 0;
}

void func()
{
	stack *a = new stack;

	for (size_t i = 0; i < 10; i++)
		push(&a, rand() % 100 - 50);
	double count = 0;
	head = a;
	for (size_t i = 0; i < 10; i++)
	{
		count += a->data;
		cout << a->data << " ";
		a = a->next;
	}
	a = head;
	cout << endl;
	count /= 10;
	stack *b = new stack;
	int z = 0;
	for (size_t i = 0; i < 10; i++)
	{
		if (count < a->data)
		{
			push(&b, a->data);
			a = a->next;
			z++;
		}
	}
	for (size_t i = 0; i < z; i++)
	{
		count += b->data;
		cout << b->data << " ";
		b = b->next;
	}
	cout << endl;
}

void push(stack ** head, int data)
{
	stack *element = new stack;
	element->data = data;
	element->next = *head;
	*head = element;
}