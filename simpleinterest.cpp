#include <iostream>
using namespace std;

int main() {
  float p, r, t, si, ci;
  
  cout << "Enter principal amount: ";
  cin >> p;
 
  cout << "Enter rate of interest: ";
  cin >> r;
  
  cout << "Enter time period: ";
  cin >> t;
  

  si = (p * r * t) / 100;   
  

  ci = p * (pow((1 + r/100), t) - 1);  
  
  cout << "Simple interest = " << si << endl;
  cout << "Compound interest = " << ci;  
} 
