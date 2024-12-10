#include <stdio.h>

int somaPA(int x, int y, int z){
    int soma;
    
    soma = (z * (x + y)) / 2;
    
    return soma;
}

int main(){
    int a, b, n;
    
    scanf("%d %d %d", &a, &b, &n);
    
    printf("%d", somaPA(a, b, n));

    return 0;
}