#include <iostream>
#include <cmath>
using namespace std;


//calculate the area of a circle
int main() {
    double radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "give us a radius: ";
    cin >> radius;
    cout << area;

    return 0;
}