#include <iostream>
#include <StaticLib.h>

using namespace std;

int main()
{
    int** arr;
    arr = new int* [3];
    for (int i = 0; i < 3; i++)
        arr[i] = new int[4];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            arr[i][j] = rand() % 20 - 5;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


    cout << "\n" << AverageOfOddColumns(arr, 3, 4);
    cout << "\n" << CompositionOfNegativeElInEvenRows(arr, 3, 4);
    cout << "\n" << CountOfEvenEl(arr, 3, 4);
}