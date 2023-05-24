#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum, temp;

    cout << "Armstrong numbers between 1 to 100: ";

    for(int i = 1; i <= 100; i++) {
        num = i;
        sum = 0;

        while(num != 0) {
            temp = num % 10;
            sum += pow(temp, 3);
            num /= 10;
        }

        if(i == sum) {
            cout << i << " ";
        }
    }

    return 0;
}
