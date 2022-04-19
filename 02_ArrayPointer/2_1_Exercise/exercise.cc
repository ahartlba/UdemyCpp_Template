#include <iostream>

#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const unsigned int &length)
{
    // test
    // std::cout << length << std::endl;
    // std::cout << p_array[1] << std::endl;
    double sum = 0.0;
    for (unsigned int i = 0; i < length; i++)
    {
        sum += *(p_array + i); // p_array zeigt zum ersten wert des arrays
        // sum += (double)p_array[i];
    }
    return sum;
}

// Exercise 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int *array = nullptr;
    array = new int[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = value;
    }
    return array;
}
