#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Searching.h>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
using namespace std;

vector<int> bubbleSort(vector<int> arr)
{
    // ===================================
    // When to use?
    // FOR SMALL ARRAY or NEARLY SORTED ARRAY (STABLE SORTING)
    // Easy to Implement & Understand
    // =================================================
    // Space Complexity = O(1),
    // Time Complexity = O(n2),
    // Best Case Time Complexity = O(n)
    // Worst Case Time Complexity = O(n2)
    // Average Case Time Complexity = O(n2)
    // ============================================================================
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    return arr;
}

int main()
{
    vector<int> vctr = {10, 1, 7, 6, 14, 9};
    // vector<int> vctr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << "Result of Bubble Sort:" << endl;
    printVector(bubbleSort(vctr));
}