#include <stdio.h>
#include <stdlib.h>

int main(){

	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    int soma = B + C;

    if(soma % 2 != 0){
        printf("Cino");
        return 0;
    }else printf("Bino");
    

    return 0;
}
