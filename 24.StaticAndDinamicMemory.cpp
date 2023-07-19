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

    // Dynamic memory allocation (Heap Memory)
    int *ptr = new int(20);
    cout << "New integer in Heap Memory = " << *ptr << endl;

    // Dynamically allocate an array
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    printArray(arr, n);

    // Delete the allocated memory
    delete ptr;
    delete[] arr;
}