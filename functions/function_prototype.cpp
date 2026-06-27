#include <iostream>
using namespace std;

int findMaximum(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum = " << findMaximum(num1, num2) << endl;

    return 0;
}

int findMaximum(int a, int b)
{
    if (a > b)
        return a;

    return b;
}