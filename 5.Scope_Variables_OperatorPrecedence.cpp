#include <iostream>
using namespace std;

int main()
{
    // Scopes
    int a = 2, b = 2;
    if (true)
    {
        int a = 6; // rediclatring inside a scope will create a new variable in the scope.
        b = 6;
        cout << "a = " << a << ", "
             << "b = " << b << endl;
    }
    cout << "a = " << a << ", "
         << "b = " << b << endl;

    // Operator Precedence
    cout << 1 + 2 * 3 / 4 + 1 << endl;   // case 1
    cout << 1 + 2 * (3 / 4) + 1 << endl; // wrong
    cout << 1 + (2 * 3) / 4 + 1 << endl; // right

    cout << 1 + 23 / 4 * 5 + 1 << endl;   // case 2
    cout << 1 + 23 / (4 * 5) + 1 << endl; // wrong
    cout << 1 + (23 / 4) * 5 + 1 << endl; // right
    // therefore, for '*' & '/' or '+' & '-' whatever comes first will be executed first
    // Refer Operator Precedence Table
    // or simply USE BRACKETS
}