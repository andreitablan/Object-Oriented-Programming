#include "Sort.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstring>

//imi compila pana am facut ceva, o sa modific problema si o sa o postez

Sort::Sort(int numar_elemente, int min_element, int max_element)
{
    int* vector;
    vector = (int*)(malloc(numar_elemente * sizeof(int)));
    time_t t;
    srand((unsigned)time(&t));
    for (int i = 0; i < numar_elemente; i++) 
    {
       this->vector[i]= min_element + rand() % (min_element - max_element + 1);
    }
}

Sort::Sort(int* vector, int numar_elemente) 
{
    int* vector;
    vector = (int*)(malloc(numar_elemente * sizeof(int)));
    for (int i = 0; i < numar_elemente; i++) 
    {
       this->vector[i] = vector[i];
    }
}

Sort::Sort(int count, ...) 
{
    int* vector;
    vector = (int*)(malloc(numar_elemente * sizeof(int)));
    va_list vl;
    va_start(vl, count);
    for (int i = 0; i < count; i++)
    {
        this->vector[i] = va_arg(vl, int);
    }
    va_end(vl);
}

Sort::Sort(char* c)
{   
    for(int i=0; i<strlen(c); i++)

    
    printf("....\n");
}

    Sort::Sort(): vector(new int[6] {1, 2, 3, 4, 5, 6}){
   // this->numar_elemente=count;
}



void Sort::BubbleSort(bool ascendent)
{  
        int i, j, n = this->numar_elemente;
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (this->vector[j] > this->vector[j + 1])
                {
                    int aux = this->vector[j];
                    this->vector[j] = this->vector[j + 1];
                    this->vector[j + 1] = aux;
                }

}
void Sort::InsertSort(bool ascendent )
{   
    int i, j, key, n=this->numar_elemente;
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


}
int Sort::GetElementsCount()
{
    return numar_elemente;
}
int Sort::GetElementFromIndex(int index)
{
    if (index < numar_elemente && index >= 0)
        return vector[index];
    else return -1;

}
