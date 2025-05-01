#include <stdio.h>
#include <string.h>

int divis(char *dividendo, int divisor){
    int resto = 0;
    for(int i = 0; dividendo[i] != '\0'; i++){
        resto = (resto * 10 + (dividendo[i] - '0')) % divisor;
    }
    return resto == 0;
}

int main(){
    char nStr[1001];
    int in = 0;
    while(scanf("%s", nStr) != EOF){
        if(in != 0){ printf("\n"); }
        in = 1;

        int leap = (divis(nStr, 400) || (divis(nStr, 4) && !divis(nStr, 100)));
        int huluculu = (divis(nStr, 15));
        int bulukulu = (divis(nStr, 55) && leap);
        
        if(leap){ printf("This is leap year.\n"); }
        if(huluculu){ printf("This is huluculu festival year.\n"); }
        if(bulukulu){ printf("This is bulukulu festival year.\n"); }
        if(!leap && !huluculu){ printf("This is an ordinary year.\n"); }
    }

    return 0;
}
