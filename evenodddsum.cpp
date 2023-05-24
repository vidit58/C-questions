#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number N: ";
    cin >> N;
    int evenSum = 0, oddSum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) 
            evenSum += i;
        else
            oddSum += i;
    }
    cout << "The sum of even numbers is " << evenSum << endl;
    cout << "The sum of odd numbers is " << oddSum << endl;
}
