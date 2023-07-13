#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void update(int a)
{
    a = a + 2;
    return;
}

int main()
{
    // PassByValue Function

    int a = 10;
    update(a);
    cout << a << endl;
}