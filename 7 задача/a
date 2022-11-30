#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function11variant(float x) {
    float f = abs(sin(12*x)*cos(abs(2*x)/3));
    return f;
}

int main() {
    float a = 1, summa = 0;
    for (int k = 1; a > 0.001; k++) {
        a = function11variant(k) / k;
        summa += a;
    }
    printf("%f  %f", summa, a);
    return 0;
}
