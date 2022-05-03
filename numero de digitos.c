#include <stdio.h>

void main(){
    int n, d=0;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    do{
        n=n/10;
        d++;
    }while(n>1);

    printf("Esse numero tem %d digito(s).", d);
}
