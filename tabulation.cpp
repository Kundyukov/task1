#include "Tabulation.h"
#include <cmath>
#include <math.h>
#include <iostream>

double Tabul(double leftval, double rightval, double step)
{
    double y;
    double x1;
    double y1;
    for (double x = leftval; x <= rightval; x += step)
    {
        y = sqrt(x * x - 4 * log(x));
            {
            std::cout << "x: " << x << " y: " << y << std::endl;
            if (y >= INFINITY)//discontinuity test
            {
                x1 = x;
                y1 = y;
            }
           
        }
    }

    std::cout << "\nresult:\n" << "x: " << x1 << " y: " << y1 << " - infinite discontinuity!\n";

    return y;
}