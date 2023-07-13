#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int D2B(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int digit, answer, i = 0;
    while (n != 0)
    {
        digit = n & 1;
        answer = pow(10, i) * digit + answer;
        n = n >> 1;
        i++;
    }
    return answer;
}
int B2D(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int digit, answer, i = 0;
    while (n != 0)
    {
        digit = n & 1;
        answer = pow(2, i) * digit + answer;
        n = n >> 1;
        i++;
    }
    return answer;
}
int neg2B(int n)
{
    n = n + 1;
    n = n * (-1);
    n = !n;
    // int digit, answer, i = 0;
    // while (n != 0)
    // {
    //     digit = n & 1;
    //     answer = pow(10, i) * digit + answer;
    //     n = n >> 1;
    //     i++;
    // }
    return n;
}
int main()
{
    int n;
    cout << "Enter the Number to convert:";
    cin >> n;
    cout << "Binary: " << D2B(n) << endl;
    cout << "Decimal: " << B2D(n) << endl;
    cout << "Negetive to Binary: " << neg2B(n) << endl;
}