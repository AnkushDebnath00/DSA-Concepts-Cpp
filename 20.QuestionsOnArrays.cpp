#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <array>
#include <c:/Users/Ankus/OneDrive/Documents/C++/h/Printing.h>
using namespace std;

void reverseArray(vector<int> arr)
{
    // 2 pointer Approach
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    printVector(arr);
}

void mergeSortedArrays(vector<int> arr1, vector<int> arr2)
{
    vector<int> arr;
    int i = 0, j = 0;
    while (i < arr1.size() || j < arr2.size())
    {
        if (i >= arr1.size())
        {
            arr.push_back(arr2[j]);
            j++;
            continue;
        }
        if (j >= arr2.size())
        {
            arr.push_back(arr1[i]);
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr.push_back(arr2[j]);
            j++;
        }
        else
        {
            arr.push_back(arr1[i]);
            arr.push_back(arr2[j]);
            i++;
            j++;
        }
    }
    printVector(arr);
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 10};
    cout << "arr1 = ";
    printVector(arr1);
    cout << "arr2 = ";
    printVector(arr2);
    cout << endl;

    // Reverse Array
    cout << "Reverse of arr1: " << endl;
    reverseArray(arr1);
    cout << endl;

    // Merge 2 Sorted Arrays
    cout << "Merged array of arr1 and arr2: " << endl;
    mergeSortedArrays(arr1, arr2);
    cout << endl;
}