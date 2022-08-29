#include <stdio.h>

int main(void) {
    setvbuf(stdout, NULL,_IONBF,0);

    int incremento, decremento;

    printf("Ingrese dos enteros separados por un espacio \n");
    scanf("%d %d", &incremento, &decremento);
    printf("Primer numero ingresado \n");
    printf("%d \n", incremento);
    printf("Segundo numero ingresado \n");
    printf("%d \n", decremento);

    printf("El primer numero incrementado \n");
    incremento++;
    printf("%d \n", incremento);

    printf("El primer numero incrementado \n");
    incremento = incremento + 1;
    printf("%d \n", incremento);

    printf("El Segundo numero decrementado \n");
    decremento--;
    printf("%d \n", decremento);

    printf("El Segundo numero decrementado \n");
    decremento = decremento - 1;
    printf("%d \n", decremento);

    return 0;
}   

