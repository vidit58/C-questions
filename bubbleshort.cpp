#include <iostream>
using namespace std;

int main() {
    int n, arr[50], temp;


    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
