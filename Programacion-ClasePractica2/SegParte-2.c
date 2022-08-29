#include <stdio.h>

int main(void) {
    setvbuf(stdout, NULL,_IONBF,0);

    int num1, num2, suma;

    printf("Ingrese dos enteros separados por un espacio \n");
    scanf("%d %d", &num1, &num2);
    printf("Primer numero ingresado: \n");
    printf("%d \n", num1);
    printf("Segundo numero ingresado: \n");
    printf("%d \n", num2);

    suma = num1 + num2;

    printf("El resultado de la suma es: \n");
    printf("%d \n", suma);

    num1 = num2;
    num2 = num1;

    printf("El primer numero ingresado: \n");
    printf("%d \n", num1);

    printf("El Segundo numero ingresado: \n");
    printf("%d \n", num2);

    printf("El resto de la división entre num2 y num1 es: \n");
    printf("%d \n", num1 % num2);

    return 0;
}   

