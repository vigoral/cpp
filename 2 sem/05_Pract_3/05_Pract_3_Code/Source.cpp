#include "airliner.h"
#include "bomber.h"

int main()
{
	int size_airliner, size_bomber;
	cout << "Input numb of airliners = "; 
	cin >> size_airliner;
	cout << "Input numb of bombers = ";
	cin >> size_bomber;
	int size = size_airliner + size_bomber;
	airplane **obj = new airplane*[size];
	for (size_t i = 0; i < size; i++)
	{
		string type;
		int speed;
		cout << "Type = "; cin >> type;
		cout << "Speed = "; cin >> speed;
		if (i<size_airliner)
		{
			int passengers;
			cout << "Passengers = "; cin >> passengers;
			obj[i] = new airliner(speed, type, passengers);
		}
		else
		{
			int weight;
			cout << "weight = "; cin >> weight;
			obj[i] = new bomber(speed, type, weight);
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		obj[i]->print();
		cout << endl;
	}
	for (size_t i = 0; i < size; i++)
		delete obj[i];
	delete[]obj;
	system("pause");
	return 0;
}