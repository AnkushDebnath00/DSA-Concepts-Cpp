#include <iostream>
using namespace std;

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
    
}