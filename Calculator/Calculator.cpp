// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Calc.h"
using namespace std;
int main()
{
    cout << "======================" << endl;
    cout << "=  Starting Program  =" << endl;
    cout << "======================" << endl;
    cout << endl;
    Calc calc;
    int total = calc.add(1249238, 8943883);
    total = calc.subtract(15945884, total);
    total = calc.multiply(total, 3);
    cout << total << endl;
    double result = calc.divide(total, 2);
    cout << "======================" << endl;
    cout << "=  Calculation Done  =" << endl;
    cout << "======================" << endl;
    cout << "=  Result : " << std::fixed << std::setprecision(2)  << result << endl;
    cout << endl;
    cout << "======================" << endl;
    cout << "=   Ending Program   =" << endl;
    cout << "======================" << endl;

}

