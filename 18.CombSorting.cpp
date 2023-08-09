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

vector<int> combSort(vector<int> arr)
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
    for (int i = 0, gap = n - 1, temp; i + gap < n && gap > 0; i++)
    {
        temp = gap;
        for (; gap > 0; gap--)
        {
            // cout << "i = " << i << ", gap = " << gap << endl;
            if (arr[i] > arr[i + gap])
            {
                swap(arr[i], arr[i + gap]);
                // cout << "arr = ";
                // printVector(arr);
            }
        }
        gap = temp - 1;
        // cout << ":::" << endl;
    }
    return arr;
}

int main()
{
    vector<int> vctr = {6, 4, 2, 9, 8, 2, 6, 9, 0, 2, 4, 5, 12, 43, 23, 27, 41, 92, 38, 68, 62, 92, 02, 82};
    // vector<int> vctr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << "Result of Comb Sort:" << endl;
    printVector(combSort(vctr));
}