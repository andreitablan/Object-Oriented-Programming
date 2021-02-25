#include "NumberList.h"
#include <stdio.h>

void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (this->count > 10)return false;
	this->numbers[count+1] = x;
	this->count = this->count + 1;
	return true;
}
void NumberList::Sort()
{
	//sortam vectorul
}
void NumberList::Print()
{   
	int n = this->count,i=0;
	while (i < n)
	{
		printf("%d\n",this->numbers[i]);
		i++;
	}
}