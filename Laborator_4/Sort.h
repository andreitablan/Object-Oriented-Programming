#pragma once
class Sort
{ 
    int* vector;
    int numar_el;
    int partition(int minim, int maxim);

public:

    Sort(int numar_elemente, int min_element, int max_element);
    
    Sort(int* a, int numar_elemente);
    
    Sort();
    
    Sort(int count, ...);
    
    Sort(char* c);

    void InsertSort(bool ascendent = false);

    void QuickSort( int minim, int maxim);

    void BubbleSort(bool ascendent);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);
};

