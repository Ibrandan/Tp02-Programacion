#include <stdio.h>
#define IVA 1.21

int main(void) {
    setvbuf(stdout, NULL,_IONBF,0);
    float precioProducto, descuento, precioFinal;

    printf("Ingrese el precio del producto \n");
    scanf("%f", &precioProducto);
    printf("Ingrese el descuento a realizar \n");
    scanf("%f", &descuento);
    
    precioFinal = (precioProducto * descuento) * IVA;
    printf("El precio final es: %f\n", precioFinal);

    return 0;
}   

