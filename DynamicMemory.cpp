#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    float *marks = NULL;
    int i = 0; // Loop counter

    cout << "Enter No. of elements: \n";
    cin >> size;

    // Dynamic memory allocation
    marks = new float[size];

    cout << "Enter your marks: \n";

    // Iteration
    //      1    2      3
    for (i = 0; i < size; i++)
    {
        cin >> marks[i]; // 4
    }

    cout << "Entered marks are: \n";
    //     1      2     3
    for (i = 0; i < size; i++)
    {
        cout << marks[i] << "\n"; // 4
    }

    delete[] marks;

    return 0;
}