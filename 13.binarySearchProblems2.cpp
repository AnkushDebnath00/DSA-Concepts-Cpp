#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <math.h>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Searching.h>
using namespace std;

int findPivot(vector<int> arr)
{
    int left = 0, right = arr.size() - 1, mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] > arr[0])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}
int rsaSearch(vector<int> arr, int left, int right, int key)
{
    int pivot = findPivot(arr);
    if (key >= arr[0])
        return binarySearchRecursion(arr, left, pivot - 1, key);
    else
        return binarySearchRecursion(arr, pivot, right, key);
}
float squareroot(int num)
{
    int left = 0, right = num, mid, add, decimal = 5;
    float ans;
    double fraction = 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        long long int square = mid * mid;
        if (num == square)
        {
            ans = mid;
            break;
        }
        else if (num > square)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << "First Answer: " << ans << endl;
    for (int i = 0; i < decimal; i++)
    {
        fraction = fraction / 10;
        // cout << "fraction: " << fraction << endl;
        for (int i = 1; i < 10; i++)
        {
            // cout << "answerr: " << ans << ", " << i << ", " << fraction << ", " << (ans + (i * fraction)) << endl;
            long double square = (ans + fraction) * (ans + fraction);
            // cout << "square: " << square << endl;
            if (square <= num)
            {
                ans = (ans + fraction);
                // cout << "ans: " << ans << endl;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> vctr = {7, 9, 2, 3, 5, 6};
    int key;
    cout << "Enter the key to Search: ";
    cin >> key;

    // Pivot Element
    cout << "The index of the Pivot Element is: ";
    cout << findPivot(vctr) << endl;

    // Rotated Sorted array Search
    cout << "Index of Key is: " << rsaSearch(vctr, 0, 5, key) << endl;

    // Square Root
    cout << "The Square Root of " << key
         << " is: " << squareroot(key) << endl;
}