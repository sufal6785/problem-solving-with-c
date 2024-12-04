#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

Complex subtractComplex(Complex c1, Complex c2) {
    Complex diff;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    return diff;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex product;
    product.real = c1.real * c2.real - c1.imag * c2.imag;
    product.imag = c1.real * c2.imag + c1.imag * c2.real;
    return product;
}

int main() {
    Complex c1 = {3, 4}, c2 = {1, 2};

    Complex sum = addComplex(c1, c2);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);

    Complex diff = subtractComplex(c1, c2);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    Complex product = multiplyComplex(c1, c2);
    printf("Product: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
