#include <iostream>
using namespace std;

void fibonacciSeries(int n)
{
    int first = 0;
    int second = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

int main()
{
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    fibonacciSeries(terms);

    return 0;
}