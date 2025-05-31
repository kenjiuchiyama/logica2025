#include <stdio.h>

int main() {
    double F1, F2, Ft;
    scanf("%lf %lf", &F1, &F2);
    Ft = ((F1 / 100 + 1) * (F2 / 100 + 1) - 1) * 100;
    printf("%.6lf\n", Ft);

    return 0;
}
