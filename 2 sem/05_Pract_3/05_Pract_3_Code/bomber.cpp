#include "bomber.h"

bomber::bomber(): weight(0)
{
	type = "type";
	speed = 0;
}

bomber::bomber(int sp, string str, int wg) : weight(wg) 
{
	speed = sp;
	type = str;
}
void bomber::set_weight(int tmp)
{
	weight = tmp;
}

int bomber::get_weight() const
{
	return weight;
}

void bomber::print() const
{
	airplane::print();
	cout << "weight = " << weight << endl;
}

bomber::~bomber() {}