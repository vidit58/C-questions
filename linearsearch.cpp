#include <iostream>
using namespace std;

int main() {
    int n, arr[50], search, flag = 0;

  
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "Enter the element to search: ";
    cin >> search;

  
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            cout << "Element found at index " << i;
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        cout << "Element not found in the array";
    }

    return 0;
}
