#include <stdio.h>
#include <math.h>

void calculaRaizes(int x, int y, int z){
    double delta = y * y - 4 * x * z;
    
    if(delta > 0){
        double raiz1 = (-y + sqrt(delta)) / (2 * x);
        
        double raiz2 = (-y - sqrt(delta)) / (2 * x);
        
        printf("As raízes são: %.2lf e %.2lf\n", raiz1, raiz2);
        
    }else if(delta == 0){
        double raiz = -y / (2 * x);
        
        printf("A raiz é: %.2lf\n", raiz);
    }else{
        printf("Não existem raízes.\n");
    }

}    

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    calculaRaizes(a, b, c);

    return 0;
}