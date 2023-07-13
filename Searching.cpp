#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> arr, int key)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index " << i << endl;
            return i;
        }
    }
    cout << "Key not found" << endl;
    return -1;
}
int binarySearch(vector<int> arr, int key)
{
    int left = 0, right = arr.size() - 1, mid;
    while (left <= right)
    {
        mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            cout << "Key found at index " << mid << endl;
            return mid;
        }
        else if (arr[mid] > key)
            right = mid - 1;
        else if (arr[mid] < key)
            left = mid + 1;
    }
    cout << "Key not found" << endl;
    return -1;
}
int binarySearchRecursion(vector<int> arr, int left, int right, int key)
{
    int mid;
    while (left <= right)
    {
        mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            cout << "Key found at index " << mid << endl;
            return mid;
        }
        else if (arr[mid] > key)
            return binarySearchRecursion(arr, left, mid - 1, key);
        else if (arr[mid] < key)
            return binarySearchRecursion(arr, mid + 1, right, key);
    }
    cout << "Key not found" << endl;
    return -1;
}
int main()
{
    vector<int> arr = {11, 23, 35, 38, 42, 53, 56, 67, 79, 83, 95};
    int key;
    cout << "Enter the value to Search: ";

    // Linear Search
    cin >> key;
    linearSearch(arr, key);

    // Binary Search
    binarySearch(arr, key);

    // Binary Search using Recursion
    binarySearchRecursion(arr, 0, arr.size() - 1, key);
}