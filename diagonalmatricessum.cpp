#include <iostream>
using namespace std;

int main() {
    int m, n, matrix[50][50], sum = 0;

   
    cout << "Enter the number of rows of the matrix: ";
    cin >> m;

    cout << "Enter the number of columns of the matrix: ";
    cin >> n;

    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

 
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                sum += matrix[i][j];
            }
        }
    }
    cout << "Sum of diagonal elements of the matrix = " << sum << endl;

    return 0;
}
