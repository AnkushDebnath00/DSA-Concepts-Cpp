#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <math.h>
using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}
vector<int> bubbleSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - i - 1; j++)
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
vector<int> insersionSort(vector<int> arr)
{
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
vector<int> combSort(vector<int> arr)
{
    for (int i = 0, gap = arr.size() - 1; i + gap < arr.size() && gap > 0; i++)
    {
        int temp = gap;
        for (; gap > 0; gap--)
            if (arr[i] > arr[i + gap])
                swap(arr[i], arr[i + gap]);
        gap = temp - 1;
    }
    return arr;
}