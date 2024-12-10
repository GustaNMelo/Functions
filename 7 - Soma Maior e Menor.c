#include <stdio.h>

int somaMaiorMenor(int x, int y, int z){
    int maior = x, menor = x, soma;
    
    if(y > maior) maior = y;
    
    if(z > maior) maior = z;
    
    if(y < menor) menor = y;
    
    if(z < menor) menor = z;
    
    soma = maior + menor;
    
    return soma;
}    

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", somaMaiorMenor(a, b, c));

    return 0;
}