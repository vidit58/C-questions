#include <iostream>
using namespace std;

int main() {
    int num, remainder, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while(num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    cout << "The sum of digits is " << sum;

    return 0;
}
