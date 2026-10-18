#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x;
    double sum = 0;
    double fact = 1;
    int N;
    printf("¬ведите значение x: ");
    scanf("%lf", &x);
    printf("¬ведите количество N: ");
    scanf("%d", &N);
    for (int n = 0; n < N; n++) {
        sum += pow(-1, n) * pow(x, 2*n+1) / fact;
        fact *= (2*n+2) * (2*n+3);
    }
    printf("—умма р€да: %.6lf\n", sum);
    printf("sin(x): %.6lf", sin(x));
    return 0;
}