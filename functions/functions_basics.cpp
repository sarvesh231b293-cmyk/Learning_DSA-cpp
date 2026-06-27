#include <iostream>
using namespace std;

int addNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = addNumbers(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}