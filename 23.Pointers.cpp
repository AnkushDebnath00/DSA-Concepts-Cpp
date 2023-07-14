#include <iostream>
using namespace std;

int main()
{
    // Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc.
    int a = 10;
    int *p = &a;
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
    cout << "value of r (as a pointer of pointer): " << **r << endl;
    cout << "value of r (as a pointer): " << *r << endl;
}