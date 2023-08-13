#include <iostream>
using namespace std;

// Macros
#define PI 3.1416
#define AREAC(r) (PI * (r) * (r))
#define AREA(l, b) (l * b)
#define min(a, b) (((a) < (b)) ? (a) : (b))

// Multi-line Macro definition
#define ELEMENTS 1, \
                 2, \
                 3

// Global Variables
int x = 10;

// Inline Functions
inline int sum(int a, int b, int c = 0) // Default Arguments
{
    return a + b;
}

int main()
{
    int r, l, b;
    cout << "Enter the radius of circle: ";
    cin >> r;
    cout << "Perimeter of circle = " << 2 * PI * r << endl;
    cout << "Area of circle = " << AREAC(r) << endl;

    cout << "Enter the length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << AREA(l, b) << endl;

    int arr[] = {ELEMENTS};
    printf("Elements of Array are:\n");
    for (int i = 0; i < 3; i++)
        cout << arr[i] << ' ';
    cout << endl;

    cout << "Enter two numbers: ";
    cin >> l >> b;
    cout << "Minimum of " << l << " and " << b << " is " << min(l, b) << endl;

    cout << "Value of the Global Variable x = " << x << endl;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Inline Sum of x and y = " << sum(x, y) << endl;
}