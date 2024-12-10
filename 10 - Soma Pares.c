#include <stdio.h>

int somaPares(int x, int y){
    int soma = 0;
    
    for(int i = x; i <= y; i++){
        if(i % 2 == 0) soma+= i;
    }
    
    return soma;
}    

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", somaPares(a, b));

    return 0;
}