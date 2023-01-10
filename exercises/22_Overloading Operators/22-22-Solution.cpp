#include <iostream>

class Complex {
 public:
  // constructor
  Complex(double real = 0.0, double imag = 0.0) : real_(real), imag_(imag) {}

  // accessors
  double real() const { return real_; }
  double imag() const { return imag_; }

  // operator overloads
  Complex operator+(const Complex& other) const {
    return Complex(real_ + other.real_, imag_ + other.imag_);
  }
  Complex& operator+=(const Complex& other) {
    real_ += other.real_;
    imag_ += other.imag_;
    return *this;
  }
 private:
  double real_;
  double imag_;
};

int main() {
  // test addition
  Complex c1(1, 2);
  Complex c2(3, 4);
  c1 += c2;
  std::cout << c1.real() << " + " << c1.imag() << "i" << std::endl;  // prints "4 + 6i"

  Complex c3(5, 6);
  c1 += c3;
  std::cout << c1.real() << " + " << c1.imag() << "i" << std::endl; // prints "9 + 12i"
}
