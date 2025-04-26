#include <stdio.h>

int main(){
    int N, h, min, s;
    h = min = s = 0;

    scanf("%d", &N);

    while(N >= 60){
        N = N - 60;
        min = min + 1;
    }

    while(min >= 60){
        min = min - 60;
        h = h + 1;
    }

    s = N;

    printf("%d:%d:%d\n", h, min, s);

    return 0;
}
