#include <iostream>
using namespace std;

int calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        return 0;
    }
}

int divideMoney(int n){

}

int main()
{
    int a, b, mon;
    char op;
    cout << "Input value of a: ";
    cin >> a;
    cout << "Input value of b: ";
    cin >> b;
    cout << "Input operator: ";
    cin >> op;

    // answer
    cout << "Answer: " << calculate(a, b, op) << endl;

    cout << "Input the total money: ";
    cin >> mon;
    cout << "Division: " << calculate(a, b, op) << endl;
}