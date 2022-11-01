#include "Tabulation.h"
#include <cmath>
#include <math.h>
#include <iostream>

double Tabul(double leftval, double rightval, double step)
{
    double y;
    double x1;
    double y1;
    int check = 0;
    for (double x = leftval; x <= rightval; x += step)
    {
        y = sqrt(x * x - 4 * log(x)); //2 род Mine
        //y = x / (x + 1); //2 род
        //y = 2 * ((abs(x + 3)) / (x + 3)) * x + 6;//неустранимая 1 рода
        //y = sin(x) / x;//1 род
        //y = sqrt(x * x + 12 - log(x * x));//tanya
        //if (y >= 0) //убирает not a number
            {
            std::cout << "x: " << x << " y: " << y << std::endl;
            if (y >= INFINITY)//discontinuity
            {
                check = 3;
                x1 = x;
                y1 = y;
            }
           
        }
        if (y <= ( - (INFINITY))) 
        {
            check = 2;
            x1 = x;
            y1 = y;
        }
        if(isnan(y))// nan check
        {
            check = 1;
            x1 = x;
            y1 = y;
        }
    }

    std::cout << "\nresult:\n";
    if (check == 1)
        std::cout << "x: " << x1 << " y: " << y1 << " - nan, discontinuity!\n";
    if (check == 2)
        std::cout << "x: " << x1 << " y: " << y1 << " - infinite\n";
    if (check == 3)
        std::cout << "x: " << x1 << " y: " << y1 << " - infinite discontinuity!\n";

    return y;
}