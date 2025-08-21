/* Determine el número de dígitos 
de un número ingresado.*/ 

#include<stdio.h>

int main(){
    int numero;
    int auxiliar;
    int contador = 0;
    printf("Digite un numero :");
    scanf("%d",&numero);
    auxiliar = numero;
    if (auxiliar == 0){
        contador = 1; 
    }
    else{
        do{
            auxiliar = auxiliar / 10; 
            contador++;

        }while(!(auxiliar==0));
    }
    printf("El numero de digitos es : %d\n",contador );

}