#include <stdio.h>

void imprimeDivisores(int x){
    int vet[x + 1];
    
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            printf("%d\n", i);
        }
    }
}    

int main(){
    int n;
    
    scanf("%d", &n);
    
    imprimeDivisores(n);

    return 0;
}