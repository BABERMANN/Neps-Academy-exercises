#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int X;
	scanf("%d",&X);

    if(X > 0){
        printf("positivo");
        return 0;
    } 
    
    if(X < 0){
        printf("negativo");
        return 0;
    } 
        
    printf("nulo");
    return 0;
}
