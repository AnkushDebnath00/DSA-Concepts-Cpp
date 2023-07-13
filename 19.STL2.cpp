#include <cmath>
#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> d)
{
    cout << "[";
    for (int i : d)
        cout << i << " ";
    cout << "]" << endl;
}
int main()
{
    // Deque: deque<datatype> name;
    // push_back(), pop_back(), push_front(), pop_front(), at(), front(), back(), empty(), begin(), end(), erase(first_index, last_index), clear(), size(), max_size()
    deque<int> d;
    d.push_back(1);
    cout << "push_back(1): ";
    printDeque(d);
    d.push_back(2);
    cout << "push_back(2): ";
    printDeque(d);
    d.pop_back();
    cout << "pop_back(): ";
    printDeque(d);
    d.push_front(2);
    cout << "push_front(2): ";
    printDeque(d);
    d.pop_front();
    cout << "pop_front(): ";
    printDeque(d);
    d.push_back(2);
    cout << "push_back(2): ";
    printDeque(d);

    cout << endl;

    cout << "Size: " << d.size() << endl;
    cout << "Max Size: " << d.max_size() << endl;
    // cout << "Begin: " << d.begin() << endl;
    // cout << "End: " << d.end() << endl;
    cout << "Empty: " << d.empty() << endl;
    cout << "Erased: " << d.empty() << endl;
}
