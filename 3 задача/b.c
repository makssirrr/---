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

float function8variant(float x) {
    float f = cos(x*2)*sin(2*x - 1)+4.29;
    return f;
}

int main() {
    char choice;
    float y, taxes, i = 4;
    printf("Введіть тип виконаної роботи (A, B, C)\n");
    scanf("%c", choice);
    if (choice == 'A') {
        y = 100 * abs(function6variant(i) + 50);
        taxes = y * 0.1;
    }
    else if (choice == 'B') {
        y = 150 * abs(function7variant(i) + 100);
        taxes = y * 0.15;
    }
    else if (choice == 'C') {
        y = 200 * abs(function8variant(i) + 135);
        taxes = y * 0.2;
    }
    printf("Зарахавано: %f\n", y);
    printf("Податки: %f\n", taxes);
    printf("До видачі: %f\n", y - taxes);
    return 0;
}
