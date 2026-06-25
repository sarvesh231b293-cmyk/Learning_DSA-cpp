#include <iostream>
using namespace std;

int main()
{

    cout << "Using break:\n";

    for (int i = 1; i <= 10; i++)
    {

        if (i == 6)
        {
            break;
        }

        cout << i << " ";
    }

    cout << "\n\nUsing continue:\n";

    for (int i = 1; i <= 10; i++)
    {

        if (i == 6)
        {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    return 0;
}