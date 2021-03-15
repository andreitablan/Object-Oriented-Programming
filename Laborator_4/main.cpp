#include "Sort.h"
#include <stdlib.h>

int main() 
{
	Sort c1(5, 10, 20);
	c1.BubbleSort(1);
	c1.Print();

	int v[5] = { 6,8,1,2,4 };
	Sort c2(v, 5);
	c2.InsertSort(1);
	c2.Print();
	
	Sort c3(6, 1, 2, 3, 4, 5, 6);
	c3.BubbleSort(0);
	c3.Print();
	
	char c[] = "12,34,56,78";
	Sort c4(c);
	c4.BubbleSort(1);
	c4.Print();
	
	Sort c5();
	system("pause");
	return 0;
}
