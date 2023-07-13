#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int isPrime(int p)
{
    if (p == 1)
    {
        return 1;
    }
    int j = 2, count = 0;
    while (j <= sqrt(p))
    {
        if (p % j == 0)
        {
            count++;
            return 0;
        }
        j++;
    }
    return 1;
}

int main()
{
    // WHILE LOOP
    int n, sum = 0, evensum = 0, oddsum = 0, a = 1;
    float x;
    cout << "Input the number:";
    cin >> n;
    while (a <= n)
    {
        // printf("%d\n", a);
        cout << a << "  " << endl;
        sum = sum + a;
        if (a % 2)
        {
            oddsum = oddsum + a;
        }
        else
        {
            evensum = evensum + a;
        }
        a++;
    }
    cout << "sum is: " << sum << endl;
    cout << "even sum is: " << evensum << endl;
    cout << "odd sum is: " << oddsum << endl;

    // // Fahrenheit to Celsius
    float f, c;
    cout << "Input Fahrenheit value: ";
    cin >> f;
    cout << "Celcius value is: " << 5 * (f - 32) / 9 << endl;

    // PRIME NUMBERS

    int p,
        i = 1, j = 2, count = 0;

    cout << "I want prime number upto: ";
    cin >> p;
    while (i <= p)
    {
        if (isPrime(i) == 1)
        {
            cout << i << endl;
        }
        i++;
    }

    // FOR LOOP

    // sum of n numbers
    sum = 0;
    int r;
    cout << "Enter the Number: ";
    cin >> r;
    for (i = 1, count = 1; i <= r; i++, count++)
    {
        cout << count << endl;
        sum = sum + i;
    }
    cout << "Sum = " << sum << endl;

    // acci numbers
    a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (i = 1; i <= 10; i++)
    {
        cout << a + b << " ";
        b = a + b;
        a = b - a;
    }
}