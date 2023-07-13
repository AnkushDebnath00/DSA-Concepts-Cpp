#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    // IF-ELSE CONDITIONAL STATEMENT
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    // a = cn.get(); // to take space/ enter/ tab as input
    if (a > b)
    {
        cout << "a is larger" << endl;
    }
    else if (b > a)
    {
        cout << "b is larger" << endl;
    }
    else
    {
        cout << "a & b are equal" << endl;
    }

    // SWITCH CASE
    int p = fabs(a - b); // Modulus
    switch (p)
    {
    case 1:
        printf("|a - b| = 1\n");
        break;
    case 2:
        printf("|a - b| = 2\n");
        break;
    case 3:
        printf("|a - b| = 3\n");
        break;

    default:
        printf("|a - b| > 3\n");
        break;
    }

    // int p = 2;
    // int q = p + 1;
    // if ((p = 3) == q)
    // {
    //     cout << "=" << endl;
    // }
    // else
    // {
    //     cout << "!=" << endl;
    // }

    // ASCII Exercise
    int x;
    char y;
    cout << "Input a single length char: ";
    cin >> y;
    x = y;
    if (x <= 122 && x >= 97)
    {
        cout << "Your character is a lowercase character (a-z)." << endl;
    }
    else if (x <= 90 && x >= 65)
    {
        cout << "Your character is a UPPERCASE character (A-Z)." << endl;
    }
    else if (x <= 57 && x >= 48)
    {
        cout << "Your character is a numeric character (0-9)." << endl;
    }
    else
    {
        cout << "Your character is a special character (@,&,%,< etc.)." << endl;
    }
}