#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    cout << "Printing the Array: ";
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
    cout << "Printing Done." << endl;
}
void printVector(vector<int> arr)
{
    int i, size = arr.size();
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
void printVtrofVtr(vector<vector<int>> arr)
{
    int i = 0, size = arr.size();
    while (i < size)
    {
        printVector(arr[i]);
        i++;
    }
    cout << endl;
}
int sumofArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
void reverseArray(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        // arr[i] = arr[i] + arr[j];
        // arr[j] = arr[i] - arr[j];
        // arr[i] = arr[i] - arr[j];
        swap(arr[i], arr[j]);
    }
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i + 1 < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
bool findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Duplicate found." << endl;
                return 1;
            }
        }
    }
    cout << "No duplicate found, i.e., UNIQUE." << endl;
    return 0;
}

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int findDuplicateElement(int arr[], int size)
{
    //*******************************************************************
    //****I dont know how it works, but it does for 3-5 digit numbers****
    //*******************************************************************
    // int ans = 0;
    // for (int i = 0; i < size; i++)
    //     ans = ans ^ arr[i];
    // return (size % 2) ? (ans ^ (size - 1)) : ans;

    // Actual Solution
    int ans = 0;
    for (int i = 0; i < size; i++)
        ans = ans ^ arr[i];
    for (int i = 0; i < size; i++)
        ans = ans ^ i;
    return ans;
}

vector<int> intersection(int arr1[], int arr2[], int size1, int size2)
{
    int i, j, k = 0;
    vector<int> vctr;
    for (i = 0; i < size1; i++)
    {
        for (j = k; j < size2; j++)
        {
            if (arr1[i] < arr2[j])
                break;
            if (arr1[i] == arr2[j])
            {
                vctr.push_back(arr1[i]);
                k = j + 1;
                break;
            }
        }
    }
    return vctr;
}
vector<vector<int>> pairsum(vector<int> arr, int key)
{
    vector<vector<int>> ans;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
vector<vector<int>> tripletsum(vector<int> arr, int key)
{
    vector<vector<int>> ans;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

vector<int> sort01(vector<int> arr)
{
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (!arr[i])
            i++;
        else if (arr[j])
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}
vector<int> sort012(vector<int> arr)
{
    int size = arr.size();
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    return arr;
}

int main()
{
    // Declare
    int arr0[2] = {0};          // Provide 0 to all locations in the array
    int arr1[3] = {10, 15, 20}; // Provide all values to the array
    // cout << arr1[2] << endl;
    printArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    int arr2[12] = {1, 43, 23, 12, 453, 21, 532, 12, 543, 34, 342, 232};
    // cout << arr2[1] << endl;
    // cout << sizeof(arr2) << endl;
    printArray(arr2, sizeof(arr2) / sizeof(arr2[0]));

    // MIN-MAX
    cout << "Enter 6 numbers of the array: ";
    int minmax[6] = {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < 6; i++)
    // {
    //     cin >> minmax[i];
    // }
    int minval = minmax[0], maxval = minmax[0];
    for (int i = 0; i < 6; i++)
    {
        maxval = max(maxval, minmax[i]);
        minval = min(minval, minmax[i]);
    }
    cout << "max = " << maxval << endl
         << "min = " << minval << endl;

    // Sum of numbers in an array
    cout << "Sum of the elements of the Array: " << sumofArray(minmax, 6) << endl;

    // Reverse Array
    reverseArray(minmax, 6);
    for (int i = 0; i < 6; i++)
        cout << minmax[i] << " ";
    cout << endl;

    // Swap Alternate
    swapAlternate(minmax, 6);
    for (int i = 0; i < 6; i++)
        cout << minmax[i] << " ";
    cout << endl;

    // Find Duplicate
    findDuplicate(minmax, 6);

    // Find Unique : You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1]. Now, in the given array / list, 'M' numbers are present twice and one number is present only once.You need to find and return that number which is unique in the array / list.Note
    int findUniqueArray[] = {3, 3, 4, 4, 5};
    cout << "The Unique Element is: " << findUnique(findUniqueArray, 5) << endl;
    // a ^ 0 = a; a ^ a = 0;

    // Find Duplicate : You have been given an integer array/list(ARR) of size N. Where each number from 1 to N is present at least once but a single element is present twice. Find that duplicate element.
    int findDuplicateArray[] = {1, 2, 3, 3, 4, 5};
    cout << "The Duplicate Element is: " << findDuplicateElement(findDuplicateArray, 5) << endl;
    // a ^ 0 = a; a ^ a = 0;

    // Intersection of Arrays
    int is1[4] = {0, 2, 8, 9}, is2[4] = {0, 2, 5, 9};
    vector<int> intsec = intersection(is1, is2, 4, 4);
    cout << "The Intersection is: ";
    for (int i = 0; i < intsec.size(); i++)
        cout << intsec[i] << " ";
    cout << endl;

    // Pairsum
    vector<int> pairsumarr = {2, -3, 3, 3, -2};
    cout << "Answer of Pairsum: " << endl;
    printVtrofVtr(pairsum(pairsumarr, 0));
    // Tripletsum
    vector<int> tripletsumarr = {1, 1, 2, 5, 5, 5, 10};
    cout << "Answer of Tripletsum: " << endl;
    printVtrofVtr(tripletsum(tripletsumarr, 12));

    // sort 0 and 1
    cout << "Sorting 0s and 1s: " << endl;
    vector<int> sort01arr = {1, 1, 0, 0, 0, 0, 1, 0};
    printVector(sort01(sort01arr));
    // sort 0, 1 and 2
    cout << "Sorting 0s, 1s and 2s: " << endl;
    vector<int> sort012arr = {2, 0, 1, 1, 2, 0, 1, 0, 1};
    printVector(sort012(sort012arr));
}
