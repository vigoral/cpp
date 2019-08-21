#include "parabola.h"

int main()
{
	double a, b, c;
	cout << "Input obj1:\nInput a = "; cin >> a;
	cout << "Input b = "; cin >> b;
	cout << "Input c = "; cin >> c;
	parabola* obj1 = new parabola(a, b, c);
	cout << "Input obj2:\nInput a = "; cin >> a;
	cout << "Input b = "; cin >> b;
	cout << "Input c = "; cin >> c;
	parabola* obj2 = new parabola(a, b, c);
	parabola obj3(*obj1);
	cout << "obj1:\n";
	obj1->show();
	cout << "obj2:\n";
	obj2->show();
	cout << "obj3:\n";
	obj3.show();
	cout << "parabolas come together - is " << ((*obj1 || *obj2) ? "true" : "false") << endl;
	cout << "parabolas intersect - is " << ((*obj1 / *obj2) ? "true" : "false") << endl;
	if (obj1->get_a() == 0)
		cout << "It's not parabola." << endl;
	else
	{
		double x = 0;
		double y = obj1->find_maxORmin(x);
		cout << (obj1->get_a() ? "minimum" : "maximum") << " in obj1 = (" << y << "," << x << ")\n";
	}
	if (obj2->get_a() == 0)
		cout << "It's not parabola." << endl;
	else
	{
		double x = 0;
		double y = obj2->find_maxORmin(x);
		cout << (obj2->get_a() ? "minimum" : "maximum") << " in obj2 = (" << y << "," << x << ")\n";
	}
	delete obj1;
	delete obj2;
	system("pause");
	return 0;
}