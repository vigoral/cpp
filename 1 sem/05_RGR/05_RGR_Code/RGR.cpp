
#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

double TeilorExponenta(double x, double Epsilon)
{
	double y_exponenta = 0; double an = 1; long n;

	for (n = 0; Epsilon <= abs(an); n++)
	{
		y_exponenta += an;
		an *= (x / (n + 1));
	}
	return y_exponenta;
}

void Verification(double X_beg, double X_end, double Delta, double Epsilon)
{
	if ((fabs(X_beg - X_end) > fabs(Delta) && (((X_beg < X_end) && (Delta > 0))
		|| ((X_beg > X_end) && (Delta < 0))) && Epsilon < 1 && Epsilon > 0 && Delta != 0) == false)
	{
		cout << "Incorrect input." << endl;;
		system("pause");
		exit(0);
	}
}

void WriteInFile(double &X_beg, double &X_end, double &Delta, double &Epsilon)
{
	double y_teilor, y_math;
	double N = X_beg;

	while (N <= X_end)
	{
		y_math = exp(N);
		y_teilor = TeilorExponenta(N, Epsilon);

		cout << y_math << " " << y_teilor << endl;
		N += Delta;
	}

	FILE *OutputData = fopen("OutputData.txt", "w");

	if (OutputData)
	{
		for (double i = X_beg, y_teilor, y_math; Delta > 0 && i < X_end || Delta < 0 && i > X_end; i += Delta)
		{
			y_teilor = TeilorExponenta(i, Epsilon);
			y_math = exp(i);
			fprintf(OutputData, "%lf %lf %lf\n", i, y_teilor, y_math);
		}
		if (fclose(OutputData) == -1)
		{
			cout << "Error closing file" << endl;
			system("pause");
			exit(0);
		}
	}
	else
	{
		cout << "Error creating file (!)" << endl;
		system("pause");
		exit(0);
	}
	fclose(OutputData);
}

void SelectInputMethod(double &X_beg, double &X_end, double &Delta, double &Epsilon)
{
	int way;
	cout << "Choose way to set parameters:\n(1) read from file\n(2) set from keyboard\nYour selection: ";
	cin >> way;

	if (way == 1)
	{
		char Fname[100] = { 0 };
		FILE *Input = fopen("Data.txt", "r");

		if (Input)
		{
			fscanf(Input, "%lf %lf %lf %lf .\n", &X_beg, &X_end, &Delta, &Epsilon);
			if (fclose(Input) == -1)
			{
				cout << "Error closing file" << endl;
				system("pause");
				exit(0);
			}
		}
		else
		{
			cout << "Can not open file (!)" << endl;
			system("pause");
			exit(0);
		}
	}
	else if (way == 2)
	{
		cout << "Input X.begin, X.end, X.delta and epsilon (exampl: 0.1 1 0.1 0.00001):" << endl;
		scanf("%lf %lf %lf %lf.\n", &X_beg, &X_end, &Delta, &Epsilon);
	}
	else
	{
		cout << "Values are not allowed. (Enter only 1 or 2) !" << endl;
		system("pause");
		exit(0);
	}
}

int main()
{
	double X_beg, X_end, Delta, Epsilon;

	SelectInputMethod(X_beg, X_end, Delta, Epsilon);
	Verification(X_beg, X_end, Delta, Epsilon);
	WriteInFile(X_beg, X_end, Delta, Epsilon);

	system("pause");
	return 0;
}