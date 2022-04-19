#include "exercise.h"
#include <iostream>
#include <string>

void mod_cross_sum(int I, int J)
{
    std::string str;
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            if ((i + j) % 2 == 0)
            {
                str = "Gerade";
            }
            else
            {
                str = "Ungerade";
            }
            std::cout << "i: " << i << ", j: " << j << " := " << str << "!" << std::endl;
        }
    }
}
