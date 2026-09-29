#include <stdio.h>
#include <stdlib.h>

int main(){
    
	double A, B;
	scanf("%lf",&A);
	scanf("%lf",&B);

    double media = (A + B) / 2.0;

    if(media < 4){
        printf("Reprovado");
        return 0;
    }

    if(media < 7 && media >= 4){ 
        printf("Recuperacao");
        return 0;
    }

    printf("Aprovado");
    return 0;
}
