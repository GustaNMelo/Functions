#include <stdio.h>

int calculaJuros(int x, int y, double z){
    int juros;
    
    z = z / 100;
    
    juros = x * y * z;
    
    return juros;
}    

int main(){
    int c, m;
    
    double t;
    
    scanf("%d %d %lf", &c, &m, &t);
    
    printf("%d", calculaJuros(c, m, t));

    return 0;
}