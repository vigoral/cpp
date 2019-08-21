#pragma once

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

template<typename T>
class plural
{
public:
	vector<T> *arr;
	plural() {};
	plural(int s)
	{
		arr = new vector<T>;
		T tmp;
		for (size_t i = 0; i < s; i++)
		{
			cin >> tmp;
			arr->push_back(tmp);
		}
	}
	bool is_empty()
	{
		if (arr->empty())
			return true;
		else
			return false;
	}
	int size()
	{
		return arr->size();
	}
	bool find(T data)
	{
		plural<T>* tmp = new plural<T>;
		tmp->arr = new  vector<T>;
		tmp->arr->push_back(data);
		for (size_t i = 0; i < arr->size(); i++)
			if (arr[i] == tmp->arr[0])
				return true;
		return false;
	}
	void add(T data)
	{
		if (!this->find(data))
		{
			arr->push_back(data);
		}
		else
			cout << "Elem inside." << endl;
	}
	void del(T data)
	{
		plural<T>* tmp = new plural<T>;
		tmp->arr = new  vector<T>;
		tmp->arr->push_back(data);
		for (size_t i = 0; i < arr->size(); i++)
		{
			if (arr[i] == tmp->arr[0])
			{
				arr[i] = arr[arr->size()-1];
				arr->pop_back();
				break;
			}
		}
	}
	template<typename T>
	friend ostream& operator <<(ostream& cout, plural<T>& obj)
	{
		copy(obj.arr->begin(), obj.arr->end(), ostream_iterator<int>(cout, " "));
		return cout;
	}
	template<typename T>
	friend plural<T> operator + (plural<T>& obj, plural<T>& obj1)
	{
		plural<T> tmp;
		tmp.arr = new vector<T>;
		tmp.arr->swap(*obj.arr);
		tmp.arr->swap(*obj1.arr);
		return tmp;
	}
	template<typename T>
	friend plural<T> operator * (plural<T>& obj, plural<T>& obj1)
	{
		plural<T> tmp;
		int k = 0;
		for (size_t i = 0; i < obj.size(); i++)
		{
			for (size_t j = 0; j < obj1.size(); j++)
			{
				if (obj.arr[i] == obj1.arr[j])
				{
					tmp.arr->push_back(0);
					tmp.arr[k]=obj.arr[i];
					k++;
					break;
				}
			}
		}
		return tmp;
	}
};
