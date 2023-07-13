#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

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
void printPair(pair<int, int> arr)
{
    cout << arr.first << " " << arr.second << endl;
}
int firstOccurance(vector<int> arr, int key)
{
    int left = 0, right = arr.size() - 1, mid, min = -1;
    pair<int, int> ans;
    while (left <= right)
    {
        mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            min = mid;
            right = mid - 1;
        }
        if (arr[mid] > key)
            right = mid - 1;
        if (arr[mid] < key)
            left = mid + 1;
    }
    return min;
}
int lastOccurance(vector<int> arr, int key)
{
    int left = 0, right = arr.size() - 1, mid, max = -1;
    pair<int, int> ans;
    while (left <= right)
    {
        mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            max = mid;
            left = mid + 1;
        }
        if (arr[mid] > key)
            right = mid - 1;
        if (arr[mid] < key)
            left = mid + 1;
    }
    return max;
}
pair<int, int> fstNlstOccurance(vector<int> arr, int key)
{
    int left = 0, right = arr.size() - 1, mid;
    int min = firstOccurance(arr, key), max = lastOccurance(arr, key);
    pair<int, int> ans;
    ans.first = min;
    ans.second = max;
    return ans;
}
int totalOccurance(vector<int> arr, int key)
{
    pair<int, int> p = fstNlstOccurance(arr, key);
    int ans;
    if (p.first == -1 && p.second == -1)
        ans = 0;
    else
        ans = p.second + 1 - p.first;
    return ans;
}
int main()
{
    int key;
    vector<int> vctr = {1, 2, 2, 2, 3, 4, 7};
    cout << "Enter the key to search: ";
    cin >> key;
    // First and Last occurances
    cout << "First & Last Occurances of the number " << key << " are: ";
    printPair(fstNlstOccurance(vctr, key));

    // Total no of Occurances
    cout << "Total no of Occurances of the number " << key << " is: ";
    cout << totalOccurance(vctr, key);
}