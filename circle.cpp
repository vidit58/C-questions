#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    float radius, circum, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circum = 2 * M_PI * radius; 
    cout << "Circumference of the circle: " << circum << endl;
    
    area = M_PI * radius * radius;
    cout << "Area of the circle: " << area;
}
