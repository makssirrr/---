#include <stdio.h>

int main() {
    int tableRows;
    float value, valueChange, gran, metr, drahm;

    printf("Введіть кількість рядків таблиці, початкове значення та шаг змінення\n");
    scanf("%i %f %f", tableRows, value, valueChange);

    printf("╔══════════════════════════╦═════════════════════════╦═════════════════════════╗\n");
    for (int i = 0; i < tableRows; i++, value += valueChange) {
        gran = value, metr = value * 0.068, drahm = value * 0.038378;

        printf("║%16f гран ║%17f метр ║%17f драхм ║\n", gran, metr, drahm);
    }
    printf("╚══════════════════════════╩═════════════════════════╩═════════════════════════╝\n");

    return 0;
}
