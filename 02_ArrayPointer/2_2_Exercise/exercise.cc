#include <iostream>

#include "exercise.h"

// Exercise 1
void push_back(int *&input_array, const unsigned int &size, const int &value)
{
    // create new array
    int *p = nullptr;
    p = new int[size + 1];
    // write old values to array
    for (unsigned int i = 0; i < size; i++)
    {
        p[i] = input_array[i];
    }
    p[size] = value;
    // delete old array
    delete input_array;
    // link new array
    input_array = p;
}

// Exercise 2
void pop_back(int *&input_array, const unsigned int &size)
{
    int *p = nullptr;
    p = new int[size - 1];
    for (unsigned int i = 0; i < size - 1; i++)
    {
        p[i] = input_array[i];
    }
    delete input_array;
    input_array = p;
}
