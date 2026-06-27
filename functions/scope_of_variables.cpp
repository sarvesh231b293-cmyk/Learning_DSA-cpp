#include <iostream>
using namespace std;

int number = 100;

void display()
{
    int number = 50;

    cout << "Local Variable: " << number << endl;
    cout << "Global Variable: " << ::number << endl;
}

int main()
{
    display();

    cout << "Global Variable in main(): " << number << endl;

    return 0;
}