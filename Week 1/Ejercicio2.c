/*Determine 
las raíces de una ecuación de 2º grado: ax² + bx + c = 0 
(recordar que el discriminante Δ = b² – 4ac,
 y que la raíz r = (–b ± √Δ)/2a).

*/
#include<stdio.h>
#include<math.h>


int main (){
    float a, b, c;
    float discriminante;
    float raiz1,raiz2;
    printf("Ecuacion de 2do grado : ax^2 + bx +c = 0 \n");
    printf("Digite el valor de a : ");
    scanf("%f", &a);
    while(a==0){
        printf("Para que sea una ecuacion de 2do grado a debe ser diferente de cero. Vuelva a digitar el valor de a : ");
        scanf("%f",&a);
    }
    printf("Digite el valor de b: \n");
    scanf("%f",&b);
    printf("Digite el valor de c : \n");
    scanf("%f",&c);

    discriminante = b*b - 4*a*c;

    if(discriminante>0){
        printf("Existen dos reales distintas: \n");
        raiz1 = (-b + (sqrt(discriminante)))/(2*a);
        raiz2 = (-b - (sqrt(discriminante)))/(2*a);
        printf("Raiz1 : %.2f\n", raiz1);
        printf("Raiz2 : %.2f\n", raiz2);
    }
    else if(discriminante==0){
        printf("Existen una raiz doble:");
        raiz1 = (-b)/(2*a);
        printf("Raiz doble : %.2f\n", raiz1);
    }
    else{
        printf("Existe raices complejas:");
    }
}