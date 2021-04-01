#pragma once
template<typename T>
T Callback1Compare(T a, T b)
{
	return a > b;
}
template<typename T>
T Callback2Equal(T a, T b)
{
	return a == b;
}
template<class T>
class Vector{
	T* vector;
	T numar_elemente;
public:
	Vector(T *vector, T numar_elemente)	
	{   
		T* vector;
		vector=(int*) (malloc(numar_elemente *sizeof(int)));
		this->numar_elemente = numar_elemente;
	}
	void push(T x)
	{
		this->vector[this->numar_elemente] = x;
		this->numar_elemente++;
	}
	int pop()
	{
		return this->vector[this->numar_elemente];
	}
	void remove(T y)
	{
		for (int i = y; i < this->numar_elemente - 1; i++)
			this->vector[i] = this->vector[i + 1];
	}
	void insert(T y, T z)
	{
		this->numar_elemente++;
		for (int i = this->numar_elemente; i > y; i++)
			this->vector[i] = this->vector[i - 1];
		this->vector[y] = z;
	}
	void sort(int(*callback)(T, T))
	{   
		for(int i=0;i<this->numar_elemente-1;i++)
			for(int j=i+1;j<this->numar_elemente;j++)
				if (callback != nullptr)
				{
					if (callback(this->vector[i], this(vector[j])))
					{
						int aux = this->vector[i];
						this->vector[i] = this->vector[j];
						this->vector[j] = aux;
					}
				}
				else if (this->vector[i]> this(vector[j]))
				{
					int aux = this->vector[i];
					this->vector[i] = this->vector[j];
					this->vector[j] = aux;
				}
	}
	int get(T x)
	{
		for (int i = 0; i < this->numar_elemente; i++)
			if (this->vector(i) == x)return i;
		return -1;
	}
	void set(T x, T index)
	{ 
		if (index > this->numar_elemente)
			printf("Eroare indexul %d este prea mare", index);
		this->vector[index] = x;
	}
	int count()
	{
		return this->numar_elemente;
	}

	int firstIndexOf(T x, int(*callback)(T, T))
	{
		for (int i = 0; i < this->numar_elemente; i++)
			if (callback != nullptr) 
			   { if (callback(this->vector[i], x)) return i; }
			else 
				   if (this->vector[i] == x) return i;
		return -1;
	}
};
