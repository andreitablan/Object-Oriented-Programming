#include <stdio.h>
#include <iostream>
#include "Template.h"
using namespace std;
int main()
{
	Vector<int> v(0);
	//Adaugam elemente in vector folosind metoda push(element)
	v.push(5);
	v.push(10);
	v.push(6);
	v.push(2);
	v.push(100);
	v.push(3);
	v.print();

	//Scriem ultimul element din vector folosind functia pop();
	printf("\n Numarul din coada vectorului este %d ", v.pop());

	v.sort(Callback1Compare);
	printf("Vectorul srotat este: \n");
	v.print();

	system("pause");
	return 0;
}
