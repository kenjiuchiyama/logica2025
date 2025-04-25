#include <stdio.h>

int main(){
    int N;
    double A, B, C, M;
    int i = 1;
    
    scanf("%d", &N);
    
    while(i<=N){
        scanf("%lf %lf %lf", &A, &B, &C);
        M = (2*A + 3*B + 5*C)/10;
        printf("%.1lf\n", M);
        i = i + 1;
    }
    
    return 0;
}
