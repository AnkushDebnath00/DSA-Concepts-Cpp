#include <iostream>
#include <vector>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
using namespace std;

//===================================================================
// Element in 2D array position to Element in Linear Array position
// Linear Array Index = c * i + j [i=row, j=col]
//====================================================
// Create 2D Array
// int arr[r][c];
//======================

void search2DArray(int arr[][3], int row, int x)
{
    bool found = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x == arr[i][j])
            {
                found = 1;
                cout << "index = (" << i << "," << j << ")" << endl;
            }
        }
    }
    if (found == 0)
        cout << "Element not found" << endl;
    cout << endl;
}
void rowWiseSum(int arr[][3], int row)
{
    int largestRowSum = INT_MIN, index = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        if (sum > largestRowSum)
        {
            index = i;
            largestRowSum = sum;
        }
        cout << "= " << sum << endl;
    }
    cout << endl;
    cout << "Index of row with the largest Row-Sum = " << index << endl;
    cout << "Largest Row-Sum = " << largestRowSum << endl;
}
void colWiseSum(int arr[][3], int row)
{
    int largestColSum = INT_MIN, index = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
            sum += arr[j][i];
        }
        if (sum > largestColSum)
        {
            index = i;
            largestColSum = sum;
        }
        cout << "= " << sum << endl;
    }
    cout << endl;
    cout << "Index of column with the largest Col-Sum = " << index << endl;
    cout << "Largest Col-Sum = " << largestColSum << endl
         << endl;
}

void printZigZag(vector<vector<int>> arr)
{
    // Print first col top-bottom second column bottom-top and thus go on.
    int row = arr.size(), col = arr[0].size();
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 1)
            for (int j = row - 1; j >= 0; j--)
                cout << arr[j][i] << " ";
        else
            for (int j = 0; j < row; j++)
                cout << arr[j][i] << " ";
    }
    cout << endl;
}
void printSpiral(vector<vector<int>> arr)
{
    int row = arr.size(), col = arr[0].size();
    int sRow = 0, eRow = row - 1, sCol = 0, eCol = col - 1;
    while (sRow <= eRow)
    {
        for (int i = sCol; i <= eCol; i++)
            cout << arr[sRow][i] << " ";
        sRow++;
        for (int i = sRow; i <= eRow; i++)
            cout << arr[i][eCol] << " ";
        eCol--;
        for (int i = eCol; i >= sCol; i--)
            cout << arr[eRow][i] << " ";
        eRow--;
        for (int i = eRow; i >= sRow; i--)
            cout << arr[i][sCol] << " ";
        sCol++;
    }
    cout << endl;
}
void rotateImage(vector<vector<int>> arr)
{
    int row = arr.size(), col = arr[0].size();
    int arr2[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[j][3 - i - 1] = arr[i][j];
        }
    }
    print2DArray(arr2, row);
}

bool binarySearch2DArray(vector<vector<int>> arr, int x)
{
    int row = arr.size(), col = arr[0].size();
    int left = 0, right = row * col - 1, mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid / col][mid % col] == x)
            return 1;
        else if (arr[mid / col][mid % col] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main()
{
    int arr1[3][3] = {1, 10, 100, 2, 20, 200, 3, 30, 300};
    print2DArray(arr1, 3);
    int arr2[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};
    print2DArray(arr2, 3);

    // Input
    // cout << "Input the 3x3 array elements:" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr1[i][j];
    //     }
    // }
    // print2DArray(arr1, 3);

    // Search
    int x;
    cout << "Enter an element to search: ";
    cin >> x;
    search2DArray(arr1, 3, x);

    rowWiseSum(arr1, 3);
    colWiseSum(arr1, 3);

    vector<vector<int>> arr3 = {{10, 14, 17}, {22, 25, 28}, {33, 36, 39}};
    print2DVector(arr3);
    cout << "ZigZag Print: ";
    printZigZag(arr3);
    cout << "Spiral Print: ";
    printSpiral(arr3);
    cout << "Rotate Image: " << endl;
    rotateImage(arr3);

    cout << "Element " << x << " Found? -> ";
    binarySearch2DArray(arr3, x) ? cout << "Yes!" << endl : cout << "No!" << endl;
}