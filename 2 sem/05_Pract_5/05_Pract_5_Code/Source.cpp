#include "plural.h"

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	plural<int>* arr = new plural<int>(n);
	int k = 1;
	while (k != 0)
	{
		cout << "1-Check for empty." << endl;
		cout << "2-Get size." << endl;
		cout << "3-Find elem." << endl;
		cout << "4-Add elem." << endl;
		cout << "5-Del elem." << endl;
		cout << "6-Union plural." << endl;
		cout << "7-Intersection plural." << endl;
		cout << "8-Print." << endl;
		cout << "0-Exit" << endl; 
		cout << ">"; 
		cin >> k;
		switch (k)
		{
		case 1:
		{
			if (arr->is_empty())
				cout << "Plural empty!" << endl;
			else
				cout << "Plural not empty!" << endl;
			break;
		}
		case 2:
		{
			cout << "Numb of elem: " << arr->size() << endl;
			break;
		}
		case 3:
		{
			int value;
			cout << "Input value:";
			cin >> value;
			if (arr->find(value))
				cout << "Elem inside." << endl;
			else
				cout << "Elem not find." << endl;
			break;
		}
		case 4:
		{
			int value;
			cout << "Input value:";
			cin >> value;
			arr->add(value);
			break;
		}
		case 5:
		{
			int value;
			cout << "Input value:";
			cin >> value;
			arr->del(value);
			break;
		}
		case 6:
		{
			int n1;
			cout << "Input n: ";
			cin >> n1;
			plural<int>* arr1 = new plural<int>(n1);
			plural<int> arr2= *arr + *arr1;
			cout << arr2;
			break;
		}
		case 7:
		{
			int n1;
			cout << "Input n: ";
			cin >> n1;
			plural<int>* arr1 = new plural<int>(n1);
			plural<int> arr2 = (*arr) * (*arr1);
			cout << arr2;
			break;
		}
		case 8:
		{
			cout << *arr;
		}
		}
		system("pause");
		system("cls");
	}
	return 0;
}