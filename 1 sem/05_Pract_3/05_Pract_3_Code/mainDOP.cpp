#include "stdafx.h"
#include "conio.h"
#include <cmath>

int main()
{
	double a, b, c, d, y;
	printf("a = ");
	scanf_s("%lf", &a);
	printf("b = ");
	scanf_s("%lf", &b);
	printf("c = ");
	scanf_s("%lf", &c);
	printf("d = ");
	scanf_s("%lf", &d);
	y = 2 * fabs(asin(-sqrt(c / d))) + cos(pow(a, b));
	printf("Y = %lf\n", y);
	system("pause");
	return 0;
}
