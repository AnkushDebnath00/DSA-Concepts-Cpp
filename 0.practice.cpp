#include <iostream>
using namespace std;

int main()
{

    int i = 0, j = 1, n, k;

    cout << "Enter no. of series: ";
    cin >> n;
    cout << i << ", " << j << ", ";

    while (n - 2)
    {
        k = i + j;
        i = j;
        j = k;
        cout << k,
            n--;
        if (n >= 3)
        {
            cout << ", ";
        }
    }
}
