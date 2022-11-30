#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float function12variant (float x) {
    float f = cos(x*3)/2.1+cos(x*2)/1.1-8.3*sin(3x+1);
    return f;
}

int main() {
    int i = 4;
    float h = 0.1 * i, sum, min = 100;

    printf("╔════════════╦════════════╗\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("║ %10i ║ %10f ║\n", (int)arg, function12variant(arg));

        if (function12variant(arg) > 0) {
            sum += pow(function12variant(arg), 2);
        }
        if (function12variant(arg) < min) {
            min = function18variant(arg);
        }
    }

    printf("╠════════════╩════════════╣\n");
    printf("║ Мінімальне %12f ║\n", min);
    printf("║ Сума %18f ║\n", sum);
    printf("╚═════════════════════════╝\n");

    return 0;
}
