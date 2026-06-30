#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest Element = " << smallest << endl;

    return 0;
}