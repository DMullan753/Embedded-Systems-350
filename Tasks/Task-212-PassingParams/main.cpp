#include "mbed.h"

typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

ComplexNumber_C complexConjugatep(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C Conjugatep = a;
    Conjugatep.imag = (-1 * Conjugatep.imag);
    return Conjugatep; 
}

ComplexNumber_C complexConjugateq(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C Conjugateq = b;
    Conjugateq.imag = (-1 * Conjugateq.imag);    
    return Conjugateq;  
}

ComplexNumber_C complexNegate(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;

    return y;
}

ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;

    return y;
}

ComplexNumber_C complexMagnitude(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;

    return y;
}

ComplexNumber_C complexMultiply(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;

    return y;
}

ComplexNumber_C complexDivide(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;

    return y;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    ComplexNumber_C Conjugatep = complexConjugatep(p, q);
    complexDisplay("Conjugate p", Conjugatep);
    ComplexNumber_C Conjugateq = complexConjugateq(p, q);
    complexDisplay("Conjugate q", Conjugateq);
    
    while (true) {
    }
}
