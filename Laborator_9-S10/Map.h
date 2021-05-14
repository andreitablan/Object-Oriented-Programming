
#include <iostream>

template <typename K, typename V>
class Map {
	struct Element {
		K key;
		V value;
		int index;
	} *vector;

	
	int index;
	
	int size;	

	vector = new Element[1];
	size = 1;
	index = 0;
	
	public:
	Map()
	{
		vector = new Element[1];
		size = 1;
		index = 0;
	}
	
	V& operator [] (K key)
	{
		for (int i = 0; i < index; i++)
		{
			if (key == vector[i].key)
				return vector[i].value;
		}
		vector[this->index].index = this->index;
		vector[this->index].key = key;
		this->index++;
		return vector[this->index - 1].value;
	}
	
	void Set(K k, V v)
	{
		for (int i = 0; i < index; i++)
		{
			if (vector[i].key == k)
			{
				vector[i].value = v;
				size++;
				return;
			}
		}
		return;
	}
	
	bool Get(const K& k, V& v)
	{
		for (int i = 0; i < index; i++)
		{
			if (vector[i].key == k)
			{
				v = vector[i].value;
				return true;
			}
		}
		return false;
	}
	
	int Count() const
	{
		return index;
	}

	void Clear()
	{
		size = 0;
		index = 0;
		delete[] vector;
	}
	
};

