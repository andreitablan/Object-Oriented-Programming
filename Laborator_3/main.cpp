#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include "Math.h"
int main()
{
    Math first;
    int v[5] = { 1,2,3,4,5 };
    printf("%d\n", first.Add(5,6));
    printf("%d\n", first.Add(5, 6, 9));
    printf("%f\n", first.Add(5.3, 6.1));
    printf("%f\n", first.Add(5.9, 6.8,7.2));
    printf("%d\n", first.Mul(5, 6));
    printf("%d\n", first.Mul(5, 6,6));
    printf("%f\n", first.Mul(5.1, 6.2));
    printf("%f\n", first.Mul(5.1, 6.1,5.2));
    printf("%d\n", first.Add(5, v[5]));
   
	return 0;
}