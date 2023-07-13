#include <iostream>
using namespace std;
int main()
{
    // COUT FUNCTION
    // cout << "Hello World" << endl;
    cout << "Hello ";
    cout << "India"
         << "\n";            // \n works same as << endl;
    cout << "Hello World\n"; // cout << gives output;

    // DATA-TYPES
    int a1 = 176;
    cout << a1 << endl;
    cout << "size of int:" << sizeof(a1) << endl;
    char a2 = 'v';
    cout << a2 << endl;
    cout << "size of char:" << sizeof(a2) << endl;
    bool bl = 0;
    cout << bl << endl;
    cout << "size of bool:" << sizeof(bl) << endl;
    float fl = 16.78957;
    cout << fl << endl;
    cout << "size of float:" << sizeof(fl) << endl;
    double dl = 1236.743;
    cout << dl << endl;
    cout << "size of double:" << sizeof(dl) << endl;
    unsigned int ui = 124322; // unsigned int (increases range by only assigning positive values)
    cout << ui << endl;
    cout << "size of unsigned int:" << sizeof(ui) << endl;

    // TYPECASTING
    int a = 'a';
    cout << a << endl; // 'a' = 97 in ASCII table
    char ch = 97;
    cout << ch << endl; // 97 = 'a' in ASCII table

    // OPERATORS
    cout << "135 + 12 = " << 135 + 12 << endl;     // Arithmatic Operators
    cout << "135 - 12 = " << 135 - 12 << endl;     // Arithmatic Operators
    cout << "135 * 12 = " << 135 * 12 << endl;     // Arithmatic Operators
    cout << "135 / 12 = " << 135 / 12 << endl;     // Arithmatic Operators (int/int = int)
    cout << "135.0 / 12 = " << 135.0 / 12 << endl; // Arithmatic Operators (float/int = float)
    bool ro;
    ro = 135 == 12;
    cout << "135 == 12 = " << ro << endl; // Relational Operators
    ro = 135 > 12;
    cout << "135 > 12 = " << ro << endl; // Relational Operators
    ro = 135 < 12;
    cout << "135 < 12 = " << ro << endl; // Relational Operators
    ro = 135 >= 12;
    cout << "135 >= 12 = " << ro << endl; // Relational Operators
    ro = 135 <= 12;
    cout << "135 <= 12 = " << ro << endl; // Relational Operators
    bool lo;
    lo = 1 && 0;
    cout << "1 && 0 = " << lo << endl; // Logical Operators
    lo = 1 || 0;
    cout << "1 || 0 = " << lo << endl; // Logical Operators
    lo = !(1 || 0);
    cout << "!(1 || 0) = " << lo << endl; // Logical Operators

    // Bitwise Operators
    int q = 2, w = 3;
    // AND = &, OR = |, NOT = ~, XOR= ^, LeftShift = <<, RightShift = >>
    cout << "2 & 3 = " << (q & w) << endl;   // 2 & 3 = 10 & 11 = 10 = 2
    cout << "2 | 3 = " << (q | w) << endl;   // 2 | 3 = 10 | 11 = 11 = 3
    cout << "2 ^ 3 = " << (q ^ w) << endl;   // 2 ^ 3 = 10 ^ 11 = 01 = 1
    cout << "~q = " << (~q) << endl;         // ~2 = ~000..0010 = 111..1101 =(2's compliment)= -00..0010 +1 = 00..0011 = 3
    cout << "5 << 2 = " << (5 << 2) << endl; // 5 << 2 = 000..00101 << 2 = 00..001010 = 5*2*2
    cout << "5 >> 2 = " << (5 >> 2) << endl; // 5 >> 2 = 000..00101 >> 2 = 0000..0010 =  5/2/2
}