#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return (x * factorial(x - 1));
    }
}

int main()
{
    int i, j, n, count;
    cout << "Enter no of lines: ";
    cin >> n;

    cout << endl;
    // 1
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << "*"
                 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 2
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 3
    i = 1;
    while (i <= n)
    {
        j = 1;
        int k = i;
        while (j <= n)
        {
            cout << k << " ";
            j++;
            k++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 3,or
    i = 1;
    while (i <= n)
    {
        j = i;
        while (j <= n + i - 1)
        {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 4
    i = 1;
    while (i <= n)
    {
        j = n + 1 - i;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 5
    i = 1;
    count = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << count << " ";
            j++;
            count++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 6
    i = 1;
    count = 1;
    while (i <= n)
    {
        j = n + 1 - i;
        while (j <= n)
        {
            cout << count << " ";
            j++;
            count++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 6
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 7
    i = 1;
    count = n * n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << count << " ";
            j++;
            count--;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 8
    i = 1;
    count = factorial(n);
    while (i <= n)
    {
        j = 1;
        while (j <= n + 1 - i)
        {
            cout << count << " ";
            j++;
            count--;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 9
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 10
    i = 1;
    char letter = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << letter << " ";
            j++;
        }

        cout << endl;
        i++;

        letter++;
    }

    cout << endl;
    // 11
    i = 1;
    while (i <= n)
    {
        letter = 'A';
        j = 1;
        while (j <= n)
        {
            cout << letter << " ";
            j++;
            letter++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 12
    i = 1;
    letter = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << letter << " ";
            j++;
            letter++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 13
    i = 1;
    while (i <= n)
    {
        letter = 'A' + i - 1;
        j = 1;
        while (j <= n)
        {
            cout << letter << " ";
            j++;
            letter++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 14
    i = 1;
    letter = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << letter << " ";
            j++;
        }

        cout << endl;
        i++;

        letter++;
    }

    cout << endl;
    // 15
    i = 1;
    letter = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << letter << " ";
            j++;
            letter++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 16
    i = 1;
    while (i <= n)
    {
        letter = 'A' + i - 1;
        j = 1;
        while (j <= i)
        {
            cout << letter << " ";
            j++;
            letter++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 17
    i = 1;
    while (i <= n)
    {
        letter = 'A' + n - i;
        j = 1;
        while (j <= i)
        {
            cout << letter << " ";
            j++;
            letter++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    // 18
    i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }
        j = 1;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    // 19
    i = 1;
    while (i <= n)
    {
        j = n - i + 1;
        while (j >= 1)
        {
            cout << "*"
                 << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    // 20
    i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << "  ";
            space--;
        }
        j = n - i + 1;
        while (j >= 1)
        {
            cout << "*"
                 << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    // Final
    i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }
        count = 0;
        int num = (2 * i) / 2;
        while (num)
        {
            count++;
            cout << count
                 << " ";
            j--;
            num--;
        }
        count--;
        num = (2 * i - 2) / 2;
        while (num)
        {
            cout << count
                 << " ";
            j--;
            count--;
            num--;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    // Dabangg
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j
                 << " ";
            j++;
        }
        int space = i - 1;
        while (space)
        {
            cout << "* * ";
            space--;
        }
        j--;
        while (j >= 1)
        {
            cout << j
                 << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}
