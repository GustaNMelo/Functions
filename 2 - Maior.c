#include <stdio.h>

int verificaMaior(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", verificaMaior(a, b));

    return 0;
}