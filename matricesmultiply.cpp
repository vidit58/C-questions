#include <iostream>
using namespace std;

int main() {
    int n, mat1[50][50], mat2[50][50], sum[50][50], product[50][50];

    cout << "Enter the order of the matrices: ";
    cin >> n;

    cout << "Enter the elements of matrix 1: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the elements of matrix 2: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat2[i][j];
        }
    }

  
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            product[i][j] = 0;
            for(int k = 0; k < n; ++k) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Matrix sum: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix product: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
