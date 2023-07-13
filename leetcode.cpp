#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdint.h>
#include <vector>
using namespace std;

int leetcode1281(int n)
{
    // 1281. Subtract the Product and Sum of Digits of an Integer
    int mult = 1, sum = 0;
    while (n != 0)
    {
        mult = mult * (n % 10);
        sum = sum + n % 10;
        n = n / 10;
    }
    return (mult - sum);
}
int leetcodeD2B(int n)
{
    int digit, answer, i = 0;
    while (n != 0)
    {
        digit = n & 1;
        answer = pow(10, i) * digit + answer;
        n = n >> 1;
        i++;
    }
    return answer;
}
int leetcode191(unsigned int n)
{
    // 191. Number of 1 Bits
    int count = 0;
    while (n != 0)
    {
        // Checking last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int leetcode7(int x)
{
    int answer = 0, digit = 0;
    int intmax = pow(2, 31) - 1, intmin = pow(-2, 31);
    while (x != 0)
    {
        if (answer < (intmin / 10) || answer > (intmax / 10))
        {
            return 0;
        }
        answer = (answer * 10) + (x % 10);
        x = x / 10;
    }
    return answer;
}
int leetcode1009(int n)
{
    int i = 0, m = n, mask = 0, y = 5;
    if (m == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
        i++;
    }
    cout << "i = " << i << endl;
    return (~n & mask);
}
bool leetcode231(int n)
{
    int i = 0;
    while (pow(2, i) <= n)
    {
        if (pow(2, i) == n)
            return true;
        else if (pow(2, i) > ((pow(2, 31) - 1) / 2) || pow(2, i) < ((pow(-2, 31)) / 2))
            break;
        i++;
    }
    return false;
}
// bool leetcode1207(int arr[], int size)
// {
//     Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

//     int firstArr[size] = {0};
//     int secondArr[size] = {0};

//     for (int i = 0; i < size; i++)
//     {
//         firstArr[arr[i]]++;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         if (firstArr[i])
//         {
//             secondArr[firstArr[i]]++;
//             if (secondArr[firstArr[i]] > 1)
//                 return false;
//         }
//     }
//     return true;
// }
int leetcode852(vector<int> &arr)
{
    int left = 0, mid, right = arr.size() - 1;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

void leetcode88(vector<int> nums1, int m, vector<int> nums2, int n)
{
    vector<int> arr;
    int i = 0, j = 0;
    while (i < m || j < n)
    {
        if (i >= m)
        {
            arr.push_back(nums2[j]);
            j++;
            continue;
        }
        if (j >= n)
        {
            arr.push_back(nums1[i]);
            i++;
            continue;
        }
        if (nums1[i] < nums2[j])
        {
            arr.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            arr.push_back(nums2[j]);
            j++;
        }
        else
        {
            arr.push_back(nums1[i]);
            arr.push_back(nums2[j]);
            i++;
            j++;
        }
    }
    nums1 = arr;
}

int leetcode204(int n)
// Given an integer n, return the number of prime numbers that are strictly less than n.
{
    // Sieve of Eratosthenes Algorithm
    // Time Complexity: O(n*log(log(n)))
    int count = 0;
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i * 2; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main()
{
    // int n;
    int n, arr[] = {1, 3};
    vector<int> vctr = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    cout << "Enter the Number: ";
    cin >> n;
    cout << "(Multiple - Sum) of digits: " << leetcode1281(n) << endl;
    cout << "Binary Form: " << leetcodeD2B(n) << endl;
    cout << "Hamming Weight: " << leetcode191(n) << endl;
    cout << "Reverse Number: " << leetcode7(n) << endl;
    cout << "Complement of base 10 integer: " << leetcode1009(n) << endl;
    cout << "Can represent Power of Two?: " << leetcode231(n) << endl;
    // cout << "Number of occurrences of each value in the array [ 1, 1, 1, 2, 2, 3 ] is unique: " << leetcode1207(arr, 6) << endl;
    cout << "Highest value of the Mountain Array: " << leetcode852(vctr) << endl;
    cout << "Number of Prime Numbers: " << leetcode204(n) << endl;
}