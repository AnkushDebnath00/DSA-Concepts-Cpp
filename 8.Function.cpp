#include <iostream>
#include <cmath>
using namespace std;

// Function Signature
bool isEven(int n)
{
    // Function Body
    if (n & 1)
        return 0;
    return 1;
}
bool isPrime(int p)
{
    if (p <= 1)
        return 0;
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
int AP(int x)
{
    return 3 * x + 7;
}
int nthFibonacci(int n)
{
    int a = 0, b = 1, answer;
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else
        return (nthFibonacci(n - 1) + nthFibonacci(n - 2));
    return answer;
}
int hammingWeight(unsigned int n)
{
    // Number of 1 Bits
    int count = 0;
    while (n != 0)
    {
        // Checking last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int setBits(int a, int b)
{
    return (hammingWeight(a) + hammingWeight(b));
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1));
}
int nCr(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int nPr(int n, int r)
{
    return (factorial(n) / factorial(n - r));
}

int main()
{
    int n, r;
    cout << "Enter the number : ";
    cin >> n;
    // Function Call
    cout << "is Even Number? : " << isEven(n) << endl;
    cout << "is Prime Number? : " << isPrime(n) << endl;
    cout << "nth value of Arithmatic Progration (3n + 7) : " << AP(n) << endl;
    cout << "nth number in Fibonacci series : " << nthFibonacci(n) << endl;
    cout << "Hamming weight of the Number : " << hammingWeight(n) << endl;
    cout << "factorial : " << factorial(n) << endl;
    cout << "Enter the second number : ";
    cin >> r;
    cout << "Total no. of set bits : " << setBits(n, r) << endl;
    cout << "nCr : " << nCr(n, r) << endl;
    cout << "nPr : " << nPr(n, r) << endl;
}