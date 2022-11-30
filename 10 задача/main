#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float function15(float x) {
    float f = abs(cos(pow(x, 2)) - 0.51) * sin(3 * x - 4) - 4.44;
    return f;
}

int main() {
    float y[7], notNull[7]; 
    int index = 1;
    for (int k = 1; k <= 7; k++) {
        y[k] = function15(k);
        printf("%f\n", y[k]);
        if (y[k] != 0) { 
            notNull[index] = y[k];
            index++; 
        }
    }
    
    printf("\n");
    for (int k = 1; k <=7; k++) {
        printf("%f\n", notNull[k]);
    }

    return 0;
}


