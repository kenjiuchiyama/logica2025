#include <stdio.h>
#include <math.h>

double rafael(double x, double y){
    double vRafael = pow((3 * x), 2) + pow(y, 2);
    return vRafael;
}
double beto(double x, double y){
    double vBeto = 2 * pow(x, 2) + pow((5 * y), 2);
    return vBeto;
}
double carlos(double x, double y){
    double vCarlos = -100 * x + pow(y, 3);
    return vCarlos;
}

int main(){
    int n;
    double x, y;
    scanf("%d", &n);
    while(n > 0){
        scanf("%lf %lf", &x, &y);
        if(rafael(x, y) > beto(x, y) && rafael(x,y) > carlos(x, y)) printf("Rafael ganhou\n");
        if(beto(x, y) > carlos(x, y) && beto(x,y) > rafael(x, y)) printf("Beto ganhou\n");
        if(carlos(x, y) > beto(x, y) && carlos(x,y) > rafael(x, y)) printf("Carlos ganhou\n");
        n = n - 1;
    }

    return 0;
}
