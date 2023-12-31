#include <iostream>
using namespace std;

void update(int **v)
{
    **v = 20;    // this will update the value of x
    *v = *v + 1; // this will update the value of u outside the scope
    v++;         // this will not update the value of v outside the scope
}

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // arr[i] = *(arr + i) = i[arr]
        // or,
        // sum += *arr;
        // arr++;
    }
    return sum;
}

int main()
{
    // Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc.
    int a = 10;
    int *p = &a; // &a = address of a
    cout << "Address of a / Value of p: " << &a << " = " << p << endl;
    cout << "Value of a / Value of p (as a pointer): " << a << " = " << *p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Size of p (address): " << sizeof(p) << endl;
    cout << "Size of *p (int): " << sizeof(*p) << endl;

    // copy pointer
    int *q = p;
    cout << "Value of a (via q): " << *q << endl;

    // pointer increment
    cout << "value of q: " << q << endl;
    cout << "value of q after incrementing (+ size of datatype): " << ++q << endl;

    // pointer to pointer
    int **r = &p;
    cout << "value of r: " << r << endl;
    cout << "value of r (as a pointer): " << *r << endl;
    cout << "value of r (as a pointer of pointer): " << **r << endl;

    // pointer for array
    int arr[5] = {11, 22, 33, 44, 55};
    int *s = arr;
    cout << "value of first address of Array (arr)= "
         << "= value of pointer (s): " << s << endl;                                  // s = arr = &arr[0]
    cout << "value of first element of Array (via pointer)= " << *s << endl;          // *s = arr[0]
    cout << "value of first element of Array (via arr as pointer)= " << *arr << endl; // arr = &arr[0]
    cout << "value of second element of Array (via pointer)= " << *(s + 1) << endl;   // *(s + i) = arr[i]

    cout << endl;
    cout << "size of array: " << sizeof(arr) << endl;          // 5 * 4 = 20
    cout << "size of pointer of array: " << sizeof(s) << endl; // 8
    cout << endl;

    // content of symbol table cannot be changed
    // int a = 10; // error: redefinition of 'int a'
    // arr = arr + 1; // error: assignment of read-only variable 'arr'

    // character arrays
    char c[6] = "world"; // One extra for null character
    char *d = c;
    cout << "the whole character array = " << d << endl; // cout function will print till it sees null character
    cout << "value of first element of Array (c[0]) = " << *d << endl;

    char c1 = 'Z';
    char *d1 = &c1;
    cout << "character = " << d1 << endl; // prints a, but doesnt stop until null character

    // updating value with a function
    int x = 10;
    int *u = &x;
    int **v = &u;
    cout << "value of x before update function = " << x << endl;
    cout << "value of u before update function = " << u << endl;
    cout << "value of v before update function = " << v << endl;
    update(v); // update function updates the value of x
    cout << "value of x after update function = " << x << endl;
    cout << "value of u after update function = " << u << endl;
    cout << "value of v after update function = " << v << endl;

    // Get sum of array elements
    cout << "Sum of array elements = " << getsum(arr, sizeof(arr) / sizeof(arr[0])) << endl;        // 11 + 22 + 33 + 44 + 55
    cout << "Sum of array segment = " << getsum(arr + 3, sizeof(arr) / sizeof(arr[0]) - 3) << endl; // 44 + 55

    // void pointer
    void *ptr;
    int x1 = 10;
    ptr = &x1;
    cout << "value of x1 = " << x1 << endl;
    cout << "value of ptr = " << ptr << endl;
    cout << "value of ptr (as a pointer) = " << *(int *)ptr << endl; // typecasting void pointer to int pointer

    // address typecasting
    int *ptr1 = (int *)0x7ffeeb7b0a3c;
    cout << "value of ptr1 = " << ptr1 << endl;
    cout << "value of ptr1 (as a pointer) = " << *ptr1 << endl;
}