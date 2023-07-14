#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int x = sqrt(n);
    if (n <= 1)
        return 0;
    for (int i = 2; i <= x; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int countPrimes(int n)
{

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
            count++;
    }
    return count;
}
int countPrimesOptimized(int n)
{
    // SIEVE OF ERTOSTHENES Algorithm
    // Time Complexity: O(n*log(log(n)))
    int count = 0;
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (unsigned int j = i * i; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

int countPrimesMoreOptimized(int n)
{
    // SEGMENTED SIEVE
    return 0;
}

int gcd(int a, int b)
{
    // EUCLID'S ALGORITHM
    // Time Complexity: O(log(min(a,b)))
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    // Time Complexity: O(log(min(a,b)))
    return (a * b) / gcd(a, b);
}

// Modulo Operations
// (a+b)%m = ((a%m)+(b%m))%m
// (a-b)%m = ((a%m)-(b%m)+m)%m
// (a*b)%m = ((a%m)*(b%m))%m
// (a/b)%m = ((a%m)*(b^-1%m))%m
// (a^b)%m = ((a%m)^b)%m

int fastExponentiation(int m, int n)
{
    // m^n
    // Time Complexity: O(log(n))
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return fastExponentiation(m * m, n / 2);
    return m * fastExponentiation(m * m, (n - 1) / 2);
}

int main()
{
    int a, b, m, n;
    cout << "Enter the 1 number: ";
    cin >> n;
    cout << "is Prime? " << isPrime(n) << endl;
    cout << "Number of primes: " << countPrimes(n) << endl;
    cout << "Number of primes: " << countPrimesOptimized(n) << endl;
    cout << "Number of primes: " << countPrimesMoreOptimized(n) << endl;
    cout << "Enter the 2 numbers: ";
    cin >> m;
    cin >> n;
    cout << "Greatest Common Dividend: " << gcd(m, n) << endl;
    cout << "Least Common Multiple: " << lcm(m, n) << endl;
}