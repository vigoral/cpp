#pragma once

#include <iostream>

using namespace std;

template<typename T>
class plural
{
public:
	T elem;
	plural* r;
	plural() {};
	plural(int s)
	{
		plural<int>* tmp = this;
		for (size_t i = 0; i < s; i++)
		{
			cin >> tmp->elem;
			if (i == s - 1)
				tmp->r = nullptr;
			else
				tmp->r = new plural<T>;
			tmp = tmp->r;
		}
	}
	plural(plural *data)
	{
		plural<int>* tmp = this;
		while (data != nullptr)
		{
			tmp = new plural<T>;
			tmp->elem = data->elem;
			data = data->r;
			if (data!=nullptr)
				tmp->r = nullptr;
			else
				tmp->r = new plural<T>;
			tmp = tmp->r;
		}
	}
	bool is_empty()
	{
		if (this == nullptr)
			return true;
		else
			return false;
	}
	int size()
	{
		int count = 0;
		plural<T>* tmp = this;
		while (tmp != nullptr)
		{
			count++;
			tmp = tmp->r;
		}
		return count;
	}
	bool find(T tmp_elem)
	{
		plural<T>* tmp = this;
		while (tmp != nullptr)
		{
			if (tmp->elem == tmp_elem)
				return true;
			tmp = tmp->r;
		}
		return false;
	}
	void add(T data)
	{
		plural<T>* tmp = this;
		while (true)
		{
			if (tmp->elem == data)
			{
				cout << "Elem inside." << endl;
				return;
			}
			if (tmp->r == nullptr)
			{
				tmp->r = new plural<T>;
				tmp = tmp->r;
				break;
			}
			tmp = tmp->r;
		}
		tmp->elem = data;
		tmp->r = nullptr;
	}
	void del(T data)
	{
		plural<T>* tmp = this;
		if (tmp->elem == data)
		{
			plural<T>* tmp1 = tmp->r;
			delete tmp;
			tmp = tmp1;
			return;
		}
		while (tmp->r != nullptr)
		{
			if (tmp->r->elem == data)
			{
				plural<T>* tmp_del = tmp->r;
				tmp->r = tmp->r->r;
				delete tmp_del;
				cout << "Deleted." << endl;
				return;
			}
			tmp = tmp->r;
		}
		cout << "Elem not find." << endl;
	}
	template<typename T>
	friend ostream& operator <<(ostream& cout, plural<T>& obj)
	{
		plural<T>* tmp = obj.r;
		cout << obj.elem << " ";
		while (tmp != nullptr)
		{
			cout << tmp->elem << " ";
			tmp = tmp->r;
		}
		cout << endl;
		return cout;
	}
	template<typename T>
	friend plural<T> operator + (plural<T>& obj, plural<T>& obj1)
	{
		plural<T> tmp = plural<T>(obj);
		plural<T>* tmp_1 = new plural<T>(obj1);
		while (tmp_1 != nullptr)
		{
			tmp.add(tmp_1->elem);
			tmp_1 = tmp_1->r;
		}
		return tmp;
	}
	template<typename T>
	friend plural<T> operator * (plural<T>& obj, plural<T>& obj1)
	{
		plural<T> tmp_plur = plural<T>(obj);
		plural<T> tmp = tmp_plur;
		while (true)
		{
			plural<T>* tmp_1 = new plural<T>(obj1);
			while (true)
			{
				if (tmp_1->elem == tmp.elem)
					break;
				if (tmp_1->r == nullptr)
				{
					tmp.del(tmp.elem);
					break;
				}
				tmp_1 = tmp_1->r;
			}
			if (tmp.r == nullptr)
				break;
			tmp = tmp.r;
		}
		return tmp_plur;
	}
};
