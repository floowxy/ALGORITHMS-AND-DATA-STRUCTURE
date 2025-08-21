/*Para cada producto informado (nombre, precio y cantidad), 
escriba el nombre del producto comprado y el valor total a pagar, 
considerando que se ofrecen descuentos según el número de unidades compradas:
Hasta 10 unidades: valor total
De 11 a 20 unidades: 10% de descuento
De 21 a 50 unidades: 20% de descuento
Más de 50 unidades: 25% de descuento.

*/
#include<stdio.h>

int main(){
    int op, cant;
    float precio;
    float valor_Total;
    char producto[50];
    
    printf("Productos disponibles: \n");
    printf("1. Gaseosa (S/2) \n");
    printf("2. Agua mineral (S/1) \n");
    printf("3. Bebida Energetica (S/5)\n");
    printf("Eliga un producto (1-3): \n");
    scanf("%d",&op);
    while(op<1 && op>3){
        printf("Invalido. Digite nuevamente :");
        scanf("%d",&op);
    }
    switch(op){
        case 1: precio = 2.0; sprintf(producto, "Gaseosa"); break;
        case 2: precio = 1.0; sprintf(producto, "Agua mineral"); break;
        case 3: precio = 5.0; sprintf(producto, "Bebida energetica"); break;
    }
    printf("Digite la cantidad de producto a comprar: \n");
    scanf("%d",&cant);
    while(cant<=0){
        printf("Invalido. Digite nuevamente :");
        scanf("%d",&cant);
    }
    if(cant<=10){
        valor_Total = cant*precio;
    }
    else if(cant>10 && cant<=20){
        valor_Total = cant*precio - cant*precio*0.10;

    }
    else if(cant>20 && cant<=50){
        valor_Total =  cant*precio - cant*precio*0.20;
    }
    else{
        valor_Total=cant*precio*0.25;
    }

    printf("Producto elegido :  %s\n",producto);
    printf(" Cantidad : %d\n", cant);
    printf("Valor total con descuento : %.2f\n", valor_Total);

    return 0;

}