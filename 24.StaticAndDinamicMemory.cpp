#include <iostream>
using namespace std;

void update(int &ref)
{
    ref++; // ref is a reference to the actual argument
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void print2DArray(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    // Create a reference variable
    int x = 10;
    int &ref = x;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    ref++;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;

    // Pass by reference
    int y = 20;
    cout << "before = " << y << endl;
    update(y);
    cout << "after = " << y << endl;

    // ==============================================================================================================

    // Dynamic memory allocation (Heap Memory)
    int *ptr = new int(20);
    cout << "New integer in Heap Memory = " << *ptr << endl;

    // ==============================================================================================================

    // Dynamically allocate an array
    int n;
    cout << "Enter the size of array (n): ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Printing the Array: " << endl;
    printArray(arr, n);

    // Delete the allocated memory
    delete ptr;
    delete[] arr;

    // ==============================================================================================================

    // Create 2D array dynamically
    int row, col;
    cout << "Enter the size of 2D array (row, col): ";
    cin >> row >> col;
    int **arr2D = new int *[row];
    for (int i = 0; i < row; i++)
        arr2D[i] = new int[col]; // arr2D[row][col]
    cout << "Enter the elements of the 2D array: " << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr2D[i][j];
    cout << "Printing the 2D Array: " << endl;
    print2DArray(arr2D, row, col);
    for (int i = 0; i < row; i++)
        delete[] arr2D[i];
    delete[] arr2D;

    // ==============================================================================================================

    // Create Jagged Array
    cout << "Enter the number of rows: ";
    cin >> row;
    int **jaggedArray = new int *[row];
    cout << "Enter the sizes of each row: ";
    int *sizes = new int[row]; // if taking sizes as input
    for (int i = 0; i < row; i++)
    {

        cin >> col;     // if col is taken as input
        sizes[i] = col; // store each col number in sizes ( if row and col are taken as input)

        *(jaggedArray + i) = new int[sizes[i]]; // creating column of sizes[i] for each row
    }

    // input from user
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < sizes[i]; j++)
            cin >> jaggedArray[i][j];

    cout << "Elements in matrix form as follows: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
            cout << jaggedArray[i][j] << " ";
        cout << endl;
    }

    // delete allocated memory
    for (int i = 0; i < row; i++)
        delete[] jaggedArray[i];
    delete[] sizes;

    delete[] jaggedArray;
}