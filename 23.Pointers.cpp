#include <iostream>
using namespace std;

int main()
{
    // Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc.
    int a = 10;
    int *p = &a;
    cout << "Address of a: " << &a << " = " << p << endl;
    cout << "Value of a: " << a << " = " << *p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Size of p (address): " << sizeof(p) << endl;
    cout << "Size of *p (int): " << sizeof(*p) << endl;
}