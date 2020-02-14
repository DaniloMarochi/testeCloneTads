#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;
    
    printf("\n\tDigite um número inteiro: ");
    scanf("%i", &num);

    if(num%2==0){
        printf("\n\tNúmero par");
    }
    else{
        printf("\n\tNúmeor impar");
    }
printf("\n");
    return 0;
}