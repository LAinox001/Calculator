#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){
    return a+b;
}

void main(){
    int a;
    int b;
    printf("rentrez vos nombres : \n");
    scanf("%d", &a);
    printf("\n");
    scanf("%d", &b);
    printf(" L'addition de %d et de %d = %d", a, b, addition(a, b));
    return;
}
