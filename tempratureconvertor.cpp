#include<iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout<<"Enter temperature in Celsius: ";
    cin>>celsius;

    fahrenheit = ((celsius / 5) * 9) + 32;

    cout<<"\nThe temperature in Fahrenheit is: "<<fahrenheit;

    return 0;
}
