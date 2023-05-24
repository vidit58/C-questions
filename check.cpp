#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"\nEnter the second number: ";
    cin>>num2;

    if(num1 == num2)
    {
        cout<<"\nBoth numbers are equal.";
    }
    else
    {
        cout<<"\nNumbers are not equal.";
    }

    return 0;
}
