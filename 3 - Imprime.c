#include <stdio.h>

void imprimeNumeros(int x){
    int vet[x + 1];
    
    for(int i = 0; i <= x; i++){
        printf("%d\n", i);
    }
}

int main(){
    int n;
    
    scanf("%d", &n);
    
    imprimeNumeros(n);

    return 0;
}