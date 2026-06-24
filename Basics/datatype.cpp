#include <iostream>
using namespace std;

int main()
{
    int age;
    float cgpa;
    char grade;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "\n--- Student Details ---" << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}