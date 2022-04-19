#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

// Exercise 2
std::vector<double> max_row_values(Matrix &matrix)
{
    //init of return vector
    std::vector<double> max_row_val(matrix.size(), 0.0);
    for (std::size_t i = 0; i != matrix.size(); i++)
    {
        double row_max = 0.0;
        for (std::size_t j = 0; j != matrix[i].size(); j++)
        {
            if (matrix[i][j] > row_max)
            {
                row_max = matrix[i][j];
            }
        }
        max_row_val[i] = row_max;
    }
    return max_row_val;
}

// Exercise 3
double sort_and_max(std::vector<double> &vec)
{
    std::sort(vec.begin(), vec.end());
    return vec.back();
}
