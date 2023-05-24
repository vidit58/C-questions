#include<iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            cout<<"Invalid operator!";
            return 0;
    }

    cout<<num1<<op<<num2<<" = "<<result;

    return 0;
}
