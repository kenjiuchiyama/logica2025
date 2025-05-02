#include <stdio.h>

int mdc(int a, int b){
    int aux;
    while(a != b){
        if(a < b){ aux = a; a = b; b = aux; }
        a = a - b;
    }
    return a;    
}

int main(){
    int X, Y;
    while(scanf("%d %d", &X, &Y) != EOF){
        printf("%d\n", 2 * (X + Y) / mdc(X, Y));
    }
    return 0;
}
