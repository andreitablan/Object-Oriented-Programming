#include "Sort.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstring>
#include<iostream>
using namespace std;

//constructorul 1
Sort::Sort(int numar_elemente, int min_element, int max_element)
{
    this->vector = (int*)(malloc(numar_elemente * sizeof(int)));
    time_t t;
    srand((unsigned)time(&t));
    this->numar_el = numar_elemente;
    for (int i = 0; i < numar_elemente; i++) 
    {
       this->vector[i]= min_element + rand() % (min_element - max_element + 1);
       
    }
}

//constructorul 2
Sort::Sort(int *a, int numar_elemente) 
{
    this->numar_el = numar_elemente;
    this->vector = (int*)(malloc(numar_elemente * sizeof(int)));
    for (int i = 0; i < numar_elemente; i++) 
    {
       this->vector[i] = a[i];
    }
}

//constructorul 3
Sort::Sort(int count, ...) 
{
    this->vector = (int*)(malloc(numar_el * sizeof(int)));
    va_list vl;
    va_start(vl, count);
    for (int i = 0; i < count; i++)
    {
        this->vector[i] = va_arg(vl, int);
    }
    va_end(vl);
    this->numar_el = count;
}

//constructorul 4
/*Sort::Sort(char* c)
{   
   int contor = 0;
   this->vector = new int[strlen(c) + 1];
   for (int i = 0; i < strlen(c); i++)
   {
       int numar_nou = 0, p = 1;
       while (c[i] == ',' || c[i])
       {
           int cifra = c[i] - '0';
           numar_nou = numar_nou * p + cifra;
           p = p * 10;
           i++;
       }
       this->vector[contor++] = numar_nou;
       
   }
   this->numar_el = contor;
}*/

//constructorul 5
Sort::Sort():vector(new int[6] {1, 2, 3, 4, 5, 6})
{   
  this->numar_el=5;
}



void Sort::BubbleSort(bool ascendent)
{  
        int i, j, n = this->numar_el;
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (ascendent == 1)
                {
                    if (this->vector[j] > this->vector[j + 1])
                    {
                        int aux = this->vector[j];
                        this->vector[j] = this->vector[j + 1];
                        this->vector[j + 1] = aux;
                    }
                }
                else 
                    if (this->vector[j] < this->vector[j + 1])
                    {
                        int aux = this->vector[j];
                        this->vector[j] = this->vector[j + 1];
                        this->vector[j + 1] = aux;
                    }
                

}
void Sort::InsertSort(bool ascendent )
{   
    int i, j, key, n=this->numar_el;
    for (i = 1; i < n; i++)
    {
        key = this->vector[i];
        j = i - 1;

        while (j >= 0 && this->vector[j] > key)
        {
            this->vector[j + 1] = this->vector[j];
            j = j - 1;
        }
        this->vector[j + 1] = key;
    }
}

int Sort::partition(int minim, int maxim)
{
    int pivot = this->vector[maxim]; 
    int i = (minim - 1); 

    for (int j = minim; j <= maxim - 1; j++)
    {
        if (this->vector[j] < pivot)
        {
            i++;
            {
                int aux = this->vector[i];
                this->vector[i] = this->vector[j];
                this->vector[j] = aux; }
        }
    }
    int aux = this->vector[i + 1];
    this->vector[i + 1] = this->vector[maxim];
    this->vector[maxim] = aux;
    return (i + 1);
}
void Sort::QuickSort( int minim, int maxim)
{
    if (minim < maxim)
    {
        int m = partition(minim, maxim);

        QuickSort(minim, m - 1);
        QuickSort( m + 1, maxim);
    }

}
void Sort::Print()
{
    for (int i = 0; i < numar_el; i++)
        cout << this->vector[i] << " ";
    cout << '\n';
}

int Sort::GetElementsCount()
{
    return numar_el;
}

int Sort::GetElementFromIndex(int index)
{
    if (index < numar_el && index >= 0)
        return vector[index];
    else return -1;

}
