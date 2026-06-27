#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return original == sum;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;

    return 0;
}