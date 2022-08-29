#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(void) {
    setvbuf(stdout, NULL,_IONBF,0);
    float altura, radio, volumen;

    printf("Ingrese la altura \n");
    scanf("%f", &altura);

    altura = (altura)/1000;

    printf("Ingrese el radio \n");
    scanf("%f", &radio);

    volumen = (PI * pow(radio, 2) * altura)*100 ;
    printf("El volumen del cilindro es: \n");
    printf("%f", volumen);
    return 0;
}   

