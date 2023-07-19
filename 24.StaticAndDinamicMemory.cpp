#include <iostream>
using namespace std;

int main()
{
    // Create a reference variable
    int x = 10;
    int &ref = x;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
}