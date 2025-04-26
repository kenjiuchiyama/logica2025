#include <stdio.h>

int main(){
    int anos, meses, dias;
    anos = meses = 0;

    scanf("%d", &dias);

    while(dias >= 365){
        dias = dias - 365;
        anos = anos + 1;
    }

    while(dias >= 30){
        dias = dias - 30;
        meses = meses + 1;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}
