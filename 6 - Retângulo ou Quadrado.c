#include <stdio.h>

int verificaQuadrado(int x, int y){
    if(x == y){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int b, h;
    
    scanf("%d %d", &b, &h);
    
    printf("%d", verificaQuadrado(b, h));

    return 0;
}