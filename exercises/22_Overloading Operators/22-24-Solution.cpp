#include <iostream>

class Complex {
public:
    Complex(double real = 0, double imag = 0) : real_(real), imag_(imag) {}
    double real() const { return real_; }
    double imag() const { return imag_; }

private:
    double real_, imag_;
};

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real() << " + " << c.imag() << "i";
    return out;
}

int main() {
    Complex c1(1, 2);
    Complex c2(2, -3);
    Complex c3(-4, 0);
    Complex c4(0, 5);

    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;
    std::cout << c4 << std::endl;

    return 0;
}
