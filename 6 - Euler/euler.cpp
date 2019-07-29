#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EPSILON 1.0e-40

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
    printf("Euler = %.15f\n", e);
    system("pause");
return 0;
}
