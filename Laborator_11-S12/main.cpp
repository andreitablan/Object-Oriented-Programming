#include <iostream>
#include <vector>

using namespace std;

template <class T>
void Sort(vector<T>& lista, int(*compara)(T& a, T& b))
{
	for (int i = 0; i < lista.size() - 1; i++)
		for (int j = i + 1; j < lista.size(); j++)
			if (compara(lista[i], lista[j]) > 0)
				swap(lista[i], lista[j]);
	for (unsigned int i = 0; i < lista.size(); i++)
		cout << lista[i] << " ";
}

template <class T>
int compara(T a, T b)
{
	if (a > b)return 1;
	else return 0;
}

int main()
{
	vector<int> L = { 8,9,6,0,15,80,67,9 };
	
  Sort(L, compara);
	
  return 0;
}
