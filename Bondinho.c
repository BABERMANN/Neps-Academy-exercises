#include <stdio.h>
#include <stdlib.h>

int main(){
  
	int A, M;
	scanf("%d",&A);
	scanf("%d",&M);

    int soma = A + M;

    if(soma > 50){
        printf("N");
        return 0;
    }else printf("S");
    

    return 0;
}
