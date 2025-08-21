/*Calcule la distancia entre dos puntos en un espacio de 3 dimensiones  
*/
#include<stdio.h>
#include<math.h>

int main(){
    float coordenadas1[3];
    float coordenadas2[3];
    float suma = 0.0, distancia;
    printf("Digite los datos de la coordenada 1 : \n");
    for(int i=0;i<3;i++){
        scanf("%f",&coordenadas1[i]);
    }
    printf("Digite los datos de la coordenada 2 : \n");
    for(int i=0;i<3;i++){
        scanf("%f",&coordenadas2[i]);
    }

    for(int i=0;i<3;i++){
        float resta = coordenadas2[i] - coordenadas1[i];
        suma += resta*resta; 
    }

    distancia = sqrt(suma);

    printf("La distancia entre dos puntos es : %.2f\n", distancia);

}
