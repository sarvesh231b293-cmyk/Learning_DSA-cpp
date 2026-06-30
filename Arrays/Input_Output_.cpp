#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Elements: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}