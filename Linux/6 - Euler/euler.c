/*
Edited by: Brayan Angarita

3. Calcular Euler
*/


#include "gmp.h"
 
#define EPSILON 1.0e-15
 
int main() {
    unsigned long long fact = 1;
    double e = 2.0, e0;
    int n = 2;
    do {
        e0 = e;
        fact *= n++;
        e += 1.0 / fact;
    }
    while (fabs(e - e0) >= EPSILON);
    printf("e = %.37f\n", e);
    return 0;
}

