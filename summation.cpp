#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "Sum of numbers up to " << num << " is " << sum;

    return 0;
}
