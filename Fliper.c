#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d %d",&A, &B);

    if(A == 0){
        printf("C");
        return 0;
    }

    if(B == 0){
        printf("B");
        return 0;
    }else printf("A");

    return 0;
}
