#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float function9variant(float x) {
    float f = cos(pow(x,2)+1)-abs(sin(2*x)-5.76);
    return f;
}

float function10variant(float x) {
    float f = sin(x)-cos(x*3)*sin((x*2)-4.2)+4.27;
    return f;
}

int main() {
    float x = 0, z;
    long y = 1;

    for (int k = 1; k <= 15; k++) {
        x += function9variant(k);
    }

    for (int k = 1; k <= 15; k++) {
        y *= function10variant(k);
    }

    z = (pow(x,2))+2*x*y+(pow(y,2));

    printf("x = %f\ny = %li\nz = %f", x, y, z);

    return 0;
}
