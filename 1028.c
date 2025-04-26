#include <stdio.h>

int main(){
    int N, F1, F2, aux;
    
    scanf("%d", &N);

    while(N > 0){
        scanf("%d %d", &F1, &F2);

        while(F1 != F2){
            if(F1 < F2){ aux = F1; F1 = F2; F2 = aux; }
            while(F1 > F2){ F1 = F1 - F2; }
        }
        
        printf("%d\n", F1);
        N--;
    }

    return 0;
}
