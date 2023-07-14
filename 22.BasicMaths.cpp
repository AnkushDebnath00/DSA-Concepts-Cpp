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

int main()
{
    int m, n;
    cout << "Enter the 2 numbers: ";
    cin >> m;
    cin >> n;
    cout << "is Prime? " << isPrime(n) << endl;
    cout << "Number of primes: " << countPrimes(n) << endl;
    cout << "Number of primes: " << countPrimesOptimized(n) << endl;
    cout << "Number of primes: " << countPrimesMoreOptimized(n) << endl;
    cout << "Greatest Common Dividend: " << gcd(m, n) << endl;
    cout << "Least Common Multiple: " << lcm(m, n) << endl;
}