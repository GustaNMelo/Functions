#include <stdio.h>

int verificaPar(int x, int y, int z){
    int par = 0;
    
    if(x % 2 == 0) par++;
    if(y % 2 == 0) par++;
    if(z % 2 == 0) par++;
    
    return par;
}

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", verificaPar(a, b, c));

    return 0;
}