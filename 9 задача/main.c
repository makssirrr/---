#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float function14(float x) {
    float f = 2 * sin(x) * sin(2 * x - 1.5) * cos(2 * x + 1.5) - 6;
    return f;
}

int main() {
    float y, sumMinus = 0, max[2] = {0, 0}; 
    for (int k = 1991; k <= 2001; k++) {
        y = 100 * function14(k);
        printf("%i %f\n", k, y);

        if (y < 0) {
            sumMinus += y;

        }
        if ((y > max[1]) && (y > 0)) { 
            max[1] = y;
        }
    }
    if (max[1] > 0) {
        printf("Фірма мала найбільший прибуток у %i році, він становив %f\n", (int)max[0], max[1]);
    }
    else {
        printf("Фірма не мала прибутків");
    }

    return 0;
}

