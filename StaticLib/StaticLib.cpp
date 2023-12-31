#include "pch.h"
#include "framework.h"

float AverageOfOddColumns(int** arr, int rowCount, int colCount)
{
    int count = 0;
    float sum = 0;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j += 2)
        {
            sum += arr[i][j];
            count++;
        }
    }
    return sum / count;
}

float CompositionOfNegativeElInEvenRows(int** arr, int rowCount, int colCount)
{
    float composition = 1;
    for (int i = 1; i < rowCount; i += 2)
        for (int j = 0; j < colCount; j++)
            if (arr[i][j] < 0)
                composition *= arr[i][j];
    return composition;
}

int CountOfEvenEl(int** arr, int rowCount, int colCount)
{
    int count = 0;
    for (int i = 0; i < rowCount; i++)
        for (int j = 1; j < colCount; j += 2)
            if (arr[i][j] % 2 == 0 && arr[i][j] != 0)
                count++;
    return count;
}
