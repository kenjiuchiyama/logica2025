#include <stdio.h>

int main(){
    int c, n;
    double p;

    scanf("%d %d", &c, &n);
    
    if(c == 1){
        p = 4 * n;
        printf("Total: R$ %.2lf\n", p);
    }    
    else if(c == 2){
        p = 4.5 * n;
        printf("Total: R$ %.2lf\n", p);
    }    
    else if(c == 3){
        p = 5 * n;
        printf("Total: R$ %.2lf\n", p);
    }    
    else if(c == 4){
        p = 2 * n;
        printf("Total: R$ %.2lf\n", p);
    }    
    else if(c == 5){
        p = 1.5 * n;
        printf("Total: R$ %.2lf\n", p);
    }

    return 0;
}
