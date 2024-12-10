#include <stdio.h>

int calculaDelta(int x, int y, int z){
    int delta;
    
    delta = y * y - 4 * x * z;
    
    return delta;
}

int main(){
    int a, b, c, delta;
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", calculaDelta(a, b, c));

    return 0;
}