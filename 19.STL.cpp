#include <cmath>
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int printVectorWithCapacity(vector<int> arr)
{
    cout << "[";
    for (int i = 0; i < arr.capacity(); i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
    return 0;
}

int main()
{
    // Normal array
    int basic[3] = {1, 2, 3};

    // STL Array: array<datatype, size> name
    // at(), front(), empty(), back(), size()
    array<int, 4> stlArray = {1, 2, 3, 4};

    int size = stlArray.size();
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << stlArray[i] << " ";
    cout << "]" << endl;

    cout << "Element of Second Index: " << stlArray.at(2) << endl;
    cout << "Empty of Not: " << stlArray.empty() << endl;
    cout << "First Element: " << stlArray.front() << endl;
    cout << "Last Element: " << stlArray.back() << endl;
    cout << endl;

    // Vector: vector<datatype> name(initial_size, initial_values)
    // at(), front(), empty(), back(), push_back(), pop_back(), capacity(), size(), clear()
    vector<int> v(3, 20);
    cout << "Size, Capacity: " << v.size() << ", " << v.capacity() << endl;
    printVectorWithCapacity(v);

    v.push_back(1);
    cout << "Size, Capacity: " << v.size() << ", " << v.capacity() << endl;
    printVectorWithCapacity(v);

    v.push_back(2);
    cout << "Size, Capacity: " << v.size() << ", " << v.capacity() << endl;
    printVectorWithCapacity(v);

    v.push_back(3);
    cout << "Size, Capacity: " << v.size() << ", " << v.capacity() << endl;
    printVectorWithCapacity(v);

    v.push_back(4);
    cout << "Size, Capacity: " << v.size() << ", " << v.capacity() << endl;
    printVectorWithCapacity(v);

    v.pop_back();
    cout << "Pop: ";
    printVectorWithCapacity(v);
    cout << endl;

    cout << "Element of Second Index: " << v.at(2) << endl;
    cout << "Empty of Not: " << v.empty() << endl;
    cout << "Front, Back: " << v.front() << ", " << v.back() << endl;
    cout << endl;

    cout << "Before Clearing: ";
    printVectorWithCapacity(v);
    v.clear();
    cout << "After Clearing: ";
    printVectorWithCapacity(v);
    cout << "After Clearing Capacity: " << v.capacity() << endl;
    cout << endl;

    v.push_back(90);
    vector<int> vctr(v);
    cout << "Copied Vector: ";
    printVectorWithCapacity(vctr);
}
