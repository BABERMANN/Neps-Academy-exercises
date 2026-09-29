#include <stdio.h>
#include <stdlib.h>

int main(){
   
	int P1, C1, P2, C2;
	scanf("%d %d %d %d",&P1, &C1, &P2, &C2);

    int left = P1 * C1;
    int right = P2 * C2;

    if(left == right){
        printf("0");
        return 0;
    }

    if(right < left){
        printf("-1");
        return 0;
    }
    
    printf("1");
    return 0;
}
