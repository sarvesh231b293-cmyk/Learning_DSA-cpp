#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Sum of integers: " << add(10, 20) << endl;
    cout << "Sum of decimals: " << add(10.5, 20.8) << endl;

    return 0;
}