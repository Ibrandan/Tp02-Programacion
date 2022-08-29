#include <stdio.h>

int main(void) {
    setvbuf(stdout, NULL,_IONBF,0);
    float notaLengua, notaMatematicas, notaCiencias, promedio;

    printf("Ingrese la nota de Lengua \n");
    scanf("%f", &notaLengua);
    printf("Ingrese la nota de Matematicas \n");
    scanf("%f", &notaMatematicas);
    printf("Ingrese la nota de Ciencias \n");
    scanf("%f", &notaCiencias);
    
    promedio = (notaLengua + notaMatematicas + notaCiencias)/3;
    printf("El promedio final es: \n");
    printf("%.2f \n", promedio);

    return 0;
}   

