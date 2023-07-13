#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <math.h>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Searching.h>
using namespace std;

// Ayush is studying for ninjatest which will be held after 'N' days, And to score good marks he has to study 'M' chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.
// 1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.
// 2. If he starts some chapter on a particular day he completes it that day itself.
// 3. He wants to distribute his workload over 'N' days, so he wants to minimize the maximum amount of time he studies in a day.
// Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.
// For example
// if Ayush want to study 6 chapters in 3 days and the time that each chapter requires is as follows:
// Chapter 1 = 30
// Chapter 2 = 20
// Chapter 3 = 10
// Chapter 4 = 40
// Chapter 5 = 5
// Chapter 6 = 45

// Then he will study the chapters in the following order

// | day 1 : 1 , 2 | day 2 : 3 , 4 | day 3 : 5 , 6 |
// Here we can see that he study chapters in sequential order and the maximum time to study on a day is 50, which is the minimum possible in this case.

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = pageSum + arr[i];
        if (sum <= mid)
            pageSum = sum;
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
        // if (studentCount > m)
        //     return false;
    }
    return true;
}

int bookAllocation(vector<int> arr, int n, int m)
{
    int left = arr[0], right = 0, mid;

    for (int i = 0; i < n; i++)
        right += arr[i];
    int ans = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        // cout << " left, right, mid: " << left << "," << right << "," << mid << endl;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans;
}

bool isPossibleCows(vector<int> arr, int k, int mid)
{
    int cowCount = 1;
    int lastPosition = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPosition = arr[i];
        }
    }
    return false;
}

int aggresiveCows(vector<int> vctr, int k)
{
    vector<int> arr = vctr;
    sort(arr.begin(), arr.end());

    int n = arr.size(), left = 0, right = arr[n - 1] - arr[0], mid, ans = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        // cout << " left, right, mid: " << left << "," << right << "," << mid << endl;
        if (isPossibleCows(arr, k, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return ans;
}

int main()
{
    vector<int> vctr = {4, 2, 1, 3, 6};
    // vector<int> vctr = {30, 20, 10, 40, 5, 45};
    int m = 2, n = vctr.size();
    // cout << "Enter no of Days: ";
    // cin >> m;
    cout << "Result of Book Allocation problem: " << bookAllocation(vctr, n, m) << endl;
    cout << "Result of Aggresive Cows problem: " << aggresiveCows(vctr, 2) << endl;
}