#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <set>
using namespace std;

void printVector(vector<int> arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        i != arr.size() - 1 ? cout << ", " : cout << "]";
    }
    cout << endl;
}
void printCharVector(vector<char> arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        i != arr.size() - 1 ? cout << ", " : cout << "]";
    }
    cout << endl;
}
void printPair(pair<int, int> arr)
{
    cout << arr.first << " " << arr.second << endl;
}
void printArray(array<int, 10> stlArray)
{
    int size = stlArray.size();
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << stlArray[i];
        i != size - 1 ? cout << ", " : cout << "]";
    }
    cout << endl;
}

void print2DArray(int arr[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void print2DVector(vector<vector<int>> arr)
{
    int row = arr.size(), col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void printVectorString(vector<string> strVector)
{
    for (int i = 0; i < strVector.size(); i++)
        cout << strVector[i] << endl;
    cout << endl;
}

void printVectorSet(set<int> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;
    cout << endl;
}