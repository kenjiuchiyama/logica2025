#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, aux;
    scanf("%f %f %f", &A, &B, &C);
    if (A < B) { aux = A; A = B; B = aux; }
    if (A < C) { aux = A; A = C; C = aux; }
    if (B < C) { aux = B; B = C; C = aux; }

    if (A >= B + C) printf("NAO FORMA TRIANGULO\n");
    else{
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) printf("TRIANGULO RETANGULO\n");
        if (pow(A, 2) > pow(B, 2) + pow(C, 2)) printf("TRIANGULO OBTUSANGULO\n");
        if (pow(A, 2) < pow(B, 2) + pow(C, 2)) printf("TRIANGULO ACUTANGULO\n");
        if (A == B && B == C) printf("TRIANGULO EQUILATERO\n");
        if ((A == B || A == C || B == C) && !(A == B && B ==C)) printf("TRIANGULO ISOSCELES\n"); 
    }

    return 0;
}
