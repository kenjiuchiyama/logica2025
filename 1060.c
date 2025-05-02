#include <stdio.h>

int main(){
    float n;
    int npositivos = 0;
    for(int i = 1; i <= 6; i++){
        scanf("%f", &n);
        if(n > 0) npositivos++;
    }
    printf("%d valores positivos\n", npositivos);
}
