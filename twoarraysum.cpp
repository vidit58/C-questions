#include <iostream>
using namespace std;

int main() {
    int n, a[50], b[50], sum[50];

   
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

 
    for(int i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

 
    cout << "Sum of corresponding array elements = ";
    for(int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }

    return 0;
}
