#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C, mAB, mmABC;
    
    scanf("%d %d %d", &A, &B, &C);
    
    mAB = (A + B + abs(A - B)) / 2;
    mmABC = (mAB + C + abs(mAB - C)) / 2;
    
    printf("%d eh o maior\n", mmABC);
    
    return 0;
}
