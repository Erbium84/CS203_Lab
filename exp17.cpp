#include <iostream>
#include <cmath>
using namespace std;

void area_c(int radius) {
    double result = M_PI * radius * radius;
    cout << "Shape: Circle\n";
    cout << "Input: Radius = " << radius << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_c(float radius) {
    double result = M_PI * radius * radius;
    cout << "Shape: Circle\n";
    cout << "Input: Radius = " << radius << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_c(long long radius) {
    long long result = M_PI * radius * radius;
    cout << "Shape: Circle\n";
    cout << "Input: Radius = " << radius << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_s(int side) {
    int result = side * side;
    cout << "Shape: Square\n";
    cout << "Input: Side = " << side << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_s(float side) {
    float result = side * side;
    cout << "Shape: Square\n";
    cout << "Input: Side = " << side << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_s(long long side) {
    long long result = side * side;
    cout << "Shape: Square\n";
    cout << "Input: Side = " << side << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_r(int length, int breadth) {
    int result = length * breadth;
    cout << "Shape: Rectangle\n";
    cout << "Input: Length = " << length << ", Breadth = " << breadth << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_r(double length, double breadth) {
    double result = length * breadth;
    cout << "Shape: Rectangle\n";
    cout << "Input: Length = " << length << ", Breadth = " << breadth << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_r(long long length, long long breadth) {
    long long result = length * breadth;
    cout << "Shape: Rectangle\n";
    cout << "Input: Length = " << length << ", Breadth = " << breadth << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_t(int base, int height) {
    double result = 0.5 * base * height;
    cout << "Shape: Triangle\n";
    cout << "Input: Base = " << base << ", Height = " << height << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_t(double base, double height) {
    double result = 0.5 * base * height;
    cout << "Shape: Triangle\n";
    cout << "Input: Base = " << base << ", Height = " << height << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_t(long long base, long long height) {
    long long result = 0.5 * base * height;
    cout << "Shape: Triangle\n";
    cout << "Input: Base = " << base << ", Height = " << height << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_rh(float diagonal1, float diagonal2) {
    double result = 0.5 * diagonal1 * diagonal2;
    cout << "Shape: Rhombus\n";
    cout << "Input: Diagonal1 = " << diagonal1 << ", Diagonal2 = " << diagonal2 << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_rh(int diagonal1, int diagonal2) {
    double result = 0.5 * diagonal1 * diagonal2;
    cout << "Shape: Rhombus\n";
    cout << "Input: Diagonal1 = " << diagonal1 << ", Diagonal2 = " << diagonal2 << "\n";
    cout << "Area: " << result << "\n\n";
}

void area_rh(long long diagonal1, long long diagonal2) {
    long long result = 0.5 * diagonal1 * diagonal2;
    cout << "Shape: Rhombus\n";
    cout << "Input: Diagonal1 = " << diagonal1 << ", Diagonal2 = " << diagonal2 << "\n";
    cout << "Area: " << result << "\n\n";
}

int main() {
    area_c(7);                       
    area_c(4.5f); 
    area_c(9LL);                   
    area_s(5);                       
    area_s(6.5f);
    area_s(8LL);                    
    area_r(8, 10);                   
    area_r(5.5, 7.5);
    area_r(7LL, 9LL);               
    area_t(6, 8);                   
    area_t(5.5, 10.5); 
    area_t(7LL, 6LL);              
    area_rh(4.5f, 6.5f);              
    area_rh(7, 9); 
    area_rh(6LL, 4LL);                   

    return 0;
}
