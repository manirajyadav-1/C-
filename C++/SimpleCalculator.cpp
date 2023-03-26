#include<iostream>
using namespace std;

int main(){
    cout << "Enter first number:";
    int a;
    cin >> a;
    cout << "Enter second number:";
    int b;
    cin >> b;
    cout << "Enter operator: +,-,*,/,%:";
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
    cout << "Sum of two num:" << a+b;
    break;
    case '-':
    cout << "Subtraction of two num:" << a-b;
    break;
    case '*':
    cout << "Multiplication of two num:" << a*b;
    break;
    case '/':
    cout << "Division of two num:" << a/b;;
    break;
    case '%':
    cout << "Modulo division of two num:" << a%b;
    break;
    }
    return 0;

}