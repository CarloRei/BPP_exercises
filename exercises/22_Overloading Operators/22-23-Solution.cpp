#include <iostream>

class Complex {
 public:
  // constructor
  Complex(double real = 0.0, double imag = 0.0) : real_(real), imag_(imag) {}

  // accessors
  double real() const { return real_; }
  double imag() const { return imag_; }

  // operator overloads
  bool operator==(const Complex& other) const {
    return real_ == other.real_ && imag_ == other.imag_;
  }
 private:
  double real_;
  double imag_;
};

int main() {
  // test equality
  Complex c1(1, 2);
  Complex c2(1, 2);
  Complex c3(3, 4);

  if (c1 == c2) {
    std::cout << "c1 and c2 are equal." << std::endl;
  }
  if (c1 == c3) {
    std::cout << "c1 and c3 are equal." << std::endl;
  } else {
    std::cout << "c1 and c3 are not equal." << std::endl;
  }
}
