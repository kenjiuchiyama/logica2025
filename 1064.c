#include <stdio.h>

int main(){
    float a, b, c, d, e, f, s, n = 0;
    scanf("%f\n%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e, &f);
    if(a > 0){
        s = s + a;
        n++;
    }
    if(b > 0){
        s = s + b;
        n++;
    }
    if(c > 0){
        s = s + c;
        n++;
    }
    if(d > 0){
        s = s + d;
        n++;
    }
    if(e > 0){
        s = s + e;
        n++;
    }
    if(f > 0){
        s = s + f;
        n++;
    }
    printf("%.0f valores positivos\n%.1f\n", n, s / n);

    return 0;
}
