#include <iostream>
using namespace std;

int main() {
    int n, arr[50];


    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

 
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }


    cout << "Minimum element in the array is: " << min << endl;
    cout << "Maximum element in the array is: " << max;

    return 0;
}
