#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) {
        real=r;
        imag=i;
    }

    friend Complex addComplex(const Complex& c1, const Complex& c2);

    Complex addComplexMember(const Complex& c) const{
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4);  
    Complex c2(5, 6);  

    Complex sum1 = addComplex(c1, c2);
    cout << "Sum using natural friend function: ";
    sum1.display();

    Complex sum2 = c1.addComplexMember(c2);
    cout << "Sum using member function as friend: ";
    sum2.display();

    return 0;
}
