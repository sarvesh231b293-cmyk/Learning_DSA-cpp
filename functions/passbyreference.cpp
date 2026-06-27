#include <iostream>
using namespace std;

void changeValue(int &x)
{
    x = x + 10;
    cout << "Value inside function: " << x << endl;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    changeValue(num);

    cout << "Value after function call: " << num << endl;

    return 0;
}