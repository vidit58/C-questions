#include <iostream>
#include <cmath>
using namespace std;


int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while(binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, remainder;

    while(decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }

    return binary;
}

int main() {
    int choice, num;


    cout << "Menu:" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Decimal to Binary" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: // Binary to Decimal
            cout << "Enter a binary number: ";
            cin >> num;
            cout << "Decimal equivalent is " << binaryToDecimal(num);
            break;

        case 2: // Decimal to Binary
            cout << "Enter a decimal number: ";
            cin >> num;
            cout << "Binary equivalent is " << decimalToBinary(num);
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
