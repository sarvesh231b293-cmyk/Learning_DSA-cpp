#include <iostream>
using namespace std;

void changeValue(int *num)
{
    *num = *num + 10;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Before Function Call: " << number << endl;

    changeValue(&number);

    cout << "After Function Call: " << number << endl;

    return 0;
}