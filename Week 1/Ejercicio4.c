#include<stdio.h>

int main(){
    int numero;
    printf("Digite un numero : ");
    scanf("%d",&numero);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",numero,i,numero*i);
    }
}   