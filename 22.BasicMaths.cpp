#include <iostream>
#include <cmath>
#include <vector>
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
            for (int j = i * 2; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "is Prime? " << isPrime(n) << endl;
    cout << "Number of primes: " << countPrimes(n) << endl;
    cout << "Number of primes: " << countPrimesOptimized(n) << endl;
}