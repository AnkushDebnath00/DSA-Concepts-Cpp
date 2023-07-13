#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <math.h>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Searching.h>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    // ===================================
    // When to use?
    // FOR SMALL ARRAY or NEARLY SORTED ARRAY (UNSTABLE SORTING)
    // =================================================
    // Space Complexity = O(1),
    // Time Complexity = O(n2),
    // Best, Worst, Average Case Time Complexity = O(n2)
    // ============================================================================
    int n = arr.size(), minn, minIndex;
    for (int i = 0; i < n; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            // cout << "i, j, minIndex: " << i << ", " << j << ", " << minIndex << endl;
            if (arr[j] < arr[minIndex])
            {
                // cout << "true" << endl;
                minIndex = j;
            }
        }
        // cout << "Min Index: " << minIndex << endl;
        swap(arr[i], arr[minIndex]);
        // cout << "Array: ";
        // printVector(arr);
    }
    return arr;
}

int main()
{
    vector<int> arr = {11, 7, 9, 2, 0, 4};
    cout << "Selection Sort: ";
    printVector(selectionSort(arr));
}