#include <stdio.h>
#include <math.h>

float distance(int aX, int aY, int bX, int bY) {
    float distance = sqrt(pow((bX - aX), 2) + pow((bY - aY), 2));

    return distance;
}

int main() {
    int a[2] = {0, 0},
        b[2] = {26, 24},
        c[2] = {-26, 27};

    float halfPerimeter = (distance(a[0], a[1], b[0], b[1]) + distance(b[0], b[1], c[0], c[1]) + distance(c[0], c[1], a[0], a[1])) / 2;
    float mediane = 0.9 * sqrt(2 * pow(distance(a[0], a[1], b[0], b[1]), 2) + 2 * pow(distance(b[0], b[1], c[0], c[1]), 2) - distance(c[0], c[1], a[0], a[1]) * distance(c[0], c[1], a[0], a[1]));
    float bisector = sqrt(distance(c[0], c[1], a[0], a[1]) * distance(a[0], a[1], b[0], b[1]) * halfPerimeter * (halfPerimeter - distance(b[0], b[1], c[0], c[1]))) / (distance(c[0], c[1], a[0], a[1]) + distance(a[0], a[1], b[0], b[1]));

    printf("Медіана трикутника %f\n", mediane);
    printf("Бісектриса трикутника %f\n", bisector);
    return 0;
}
