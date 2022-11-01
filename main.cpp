#include <iostream>
#include "Tabulation.h"
int main()
{

    double leftval;
    double rightval;
    double step;
    std::cout << "Enter left limit for x:\n";
    std::cin >> leftval;
    std::cout << "Enter right limit for x:\n";
    std::cin >> rightval;
    std::cout << "Enter step: \n";
    std::cin >> step;
    double res = Tabul(leftval,rightval, step);
    

}