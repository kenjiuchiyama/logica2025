#include <stdio.h>
#include <math.h>

double ATri, p, ACirI, ACirC;
double a, b, c;

double calcATri(double a, double b, double c){
    p = (a + b + c) / 2;
    ATri = sqrt(p * (p - a) * (p - b) * (p - c));
    return p, ATri;
}

int main(){
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        calcATri(a, b, c);
        ACirI =  3.1415926535897 * pow((ATri / p), 2);
        ACirC =  3.1415926535897 * pow(a* b * c / (4 * ATri), 2);
        printf("%.4lf %.4lf %.4lf\n", ACirC - ATri, ATri - ACirI, ACirI);
    }

    return 0;
}
