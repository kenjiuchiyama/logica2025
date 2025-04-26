#include <stdio.h>

int main(){
    int N, A;
    scanf("%d", &N);
    A = N;
    while(A>1){
        N = N * (A - 1);
        A = A - 1;
    }
    printf("%d\n", N);
    
    return 0;
}
