#include <iostream>
#include <vector>
#include <string>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
using namespace std;

int factorial(int n)
{
    /*
    if (Base case)
        return (Base case solution)
    else
        return (Recursive call)
    */

    return (n == 0) ? 1 : n * factorial(n - 1);
}

int power(int a, int b)
{
    return (b == 0) ? 1 : 2 * power(a, b - 1);
}

void printCounting(int n)
{
    if (n == 0)
        return;
    cout << n << ' ';
    printCounting(n - 1);
}

int nthFibonacci(int n)
{
    return (n == 0 ? 0 : n == 1 ? 1
                                : nthFibonacci(n - 1) + nthFibonacci(n - 2));
}

bool isSortedArray(int *arr, int n)
{
    return (n == 1) ? true : arr[0] < arr[1] && isSortedArray(arr + 1, n - 1);
}

int countDistinctWays(long long nStairs)
{
    // You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time you can either climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.
    return (nStairs < 0) ? 0 : (nStairs == 0) ? 1
                                              : (countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2));
}

int linearSearchRecursion(int *arr, int size, int key)
{
    if (size == 0)
        return -1;
    else if (arr[0] == key)
        return (5 - size); // original size of array is 5
    else
        return linearSearchRecursion(arr + 1, size - 1, key);
}

int binarySearchRecursion(int *arr, int left, int right, int key)
{
    int mid;
    if (left > right)
        return -1;

    mid = left + ((right - left) / 2);
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearchRecursion(arr, left, mid - 1, key);
    else if (arr[mid] < key)
        return binarySearchRecursion(arr, mid + 1, right, key);

    return -1;
}

string reverseString(string str)
{
    return (str.length() == 0) ? ""
                               : reverseString(str.substr(1)) + str[0];
}

bool isPalindrome(string str)
{
    return (str.length() == 0)                 ? true
           : (str[0] == str[str.length() - 1]) ? isPalindrome(str.substr(1, str.length() - 2))
                                               : false;
}

int powerAB(int a, int b)
{
    if (b == 1)
        return a;
    else if (b % 2 == 0)
    {
        int temp = power(a, b / 2);
        return temp * temp;
    }
    else
    {
        int temp = power(a, b / 2);
        return temp * temp * a;
    }
}

void permuteHelper(vector<int> nums, int index, vector<vector<int>> &answer)
{
    if (index >= nums.size())
    {
        answer.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i], nums[index]);
        permuteHelper(nums, index + 1, answer);
        swap(nums[i], nums[index]);
    }
}
vector<vector<int>> permute(vector<int> nums)
{
    vector<vector<int>> answer;
    int index = 0;
    permuteHelper(nums, index, answer);
    return answer;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    cout << "Power of 2^" << n << " is " << power(2, n) << endl;

    printCounting(n);
    cout << endl;
    cout << "n-th Fibonacci number is " << nthFibonacci(n) << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << "Is {1, 2, 3, 4, 5} array sorted? : " << (isSortedArray(arr, 5) ? "Yes" : "No") << endl;

    cout << "Number of distinct ways to climb " << n << " stairs is " << countDistinctWays(n) << endl;

    int key;
    cout << "Enter a number to search: ";
    cin >> key;
    cout << "Is " << key << " present in {1, 2, 3, 4, 5}? : " << (linearSearchRecursion(arr, 5, key)) << endl;

    cout << "Is " << key << " present in {1, 2, 3, 4, 5}? : " << (binarySearchRecursion(arr, 0, 4, key)) << endl;

    string str;
    cout << "Enter a string:" << endl;
    cin >> str;
    cout << "Inverted String: " << reverseString(str) << endl;

    cout << "Is the string Palindrome? : " << isPalindrome(str) << endl;

    cout << "Power of 2^" << n << " is " << powerAB(2, n) << endl;

    vector<int> nums = {1, 2, 3};
    print2DVector(permute(nums));
}