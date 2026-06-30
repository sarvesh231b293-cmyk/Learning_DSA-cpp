#include <iostream>
using namespace std;

int main()
{ // Method 1
    // int arr[] = {10, 20, 30, 40, 50};
    // int x;
    // cout << "Enter the element to search: ";
    // cin >> x;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         cout << "Element found at index " << i << endl;
    //         return 0;
    //     }
    // }
    // cout << "Element not found" << endl;
    // return 0;

    // Method 2
    int arr[] = {10, 20, 30, 40, 50};
    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element not found" << endl;
    }
    return 0;
}