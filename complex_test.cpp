#include <bits/stdc++.h>
using namespace std;

class Complex {
    double real, imaginary;

public:
    Complex(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex() {}
    static Complex add(Complex c, Complex d) {
        return Complex(c.real + d.real, c.imaginary + d.imaginary);
    }
    void print_complex() {
        printf("%0.2lf + i%0.2lf\n", real, imaginary);
    }
};

int main() {
    Complex a(2, 4.2), b(3, 5.6);
    Complex c = Complex::add(a, b);
    c.print_complex();
    return 0;
}
