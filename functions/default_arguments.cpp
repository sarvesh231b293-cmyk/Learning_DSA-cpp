#include <iostream>
using namespace std;

void greet(string name = "Guest")
{
    cout << "Welcome " << name << endl;
}

int main()
{
    greet();
    greet("Sarvesh");

    return 0;
}