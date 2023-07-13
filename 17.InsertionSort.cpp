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

vector<int> insersionSort(vector<int> arr)
{
    // ===================================
    // When to use?
    // FOR SMALL ARRAY or NEARLY SORTED ARRAY (STABLE SORTING)
    // Does not require additional memory
    // =================================================
    // Space Complexity = O(1),
    // Time Complexity = O(n2),
    // Best Case Time Complexity = O(n)
    // Worst Case Time Complexity = O(n2)
    // Average Case Time Complexity = O(n2)
    // ============================================================================
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            else
                break;
        }
    }
    return arr;
}

int main()
{
    vector<int> vctr = {10, 1, 7, 6, 14, 9};
    // vector<int> vctr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << "Result of Bubble Sort:" << endl;
    printVector(insersionSort(vctr));
}