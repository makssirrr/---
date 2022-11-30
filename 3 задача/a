#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float function6variant(float x) {
    float f = sin(x)*cos(x*2)*sin(x+1.4)+5.14;
    return f;
}

float function7variant(float x) {
    float f = fabs(sin(2*x-1.5))+3*sin(pow(x,2))+2.38;
    return f;
}

int main() {
    float a, x, b, d, c, e = 2.71828, i = 4, y;
    
    printf("Введите a, x, b, d, c в такой последовательности\n");
    scanf("%f", a, x, b, d, c);

    if (abs(x) < 10) {
        float fi = tan(x + a) - log(abs(b + 7))/log(i);
        y = function6variant(fi);
    }
    else if(abs(x) >= 10) {
        float omega = c * pow((pow(x, 2) + (d * pow(e, 1.3))), 1/5);
        y = function7variant(omega);
    }

    printf("y = %f", y);

    return 0;
}
