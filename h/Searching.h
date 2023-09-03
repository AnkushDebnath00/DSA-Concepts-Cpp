#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <math.h>
using namespace std;

bool linearSearch(vector<int> arr, int key)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
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
            return mid;
        }
        else if (arr[mid] > key)
            right = mid - 1;
        else if (arr[mid] < key)
            left = mid + 1;
    }
    return -1;
}
int binarySearchRecursion(vector<int> arr, int left, int right, int key)
{
    int mid = left + ((right - left) / 2);
    return (left > right) ? -1 : (arr[mid] == key) ? mid
                             : (arr[mid] > key)    ? binarySearchRecursion(arr, left, mid - 1, key)
                                                   : binarySearchRecursion(arr, mid + 1, right, key);
}