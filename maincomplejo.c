#include <stdio.h>
#include "complejo.h"  // Incluimos el TAD Complejo

// Función para pedir un número complejo al usuario
Complejo LeerComplejo() {
    double r, i;
    printf("Ingrese la parte real: ");
    scanf("%lf", &r);
    printf("Ingrese la parte imaginaria: ");
    scanf("%lf", &i);
    return Crear(r, i);
}

int main() {
    printf("Ingrese el primer numero complejo:\n");
    Complejo c1 = LeerComplejo();

    printf("Ingrese el segundo numero complejo:\n");
    Complejo c2 = LeerComplejo();

    printf("\nPrimer numero complejo: %.2f + %.2fi\n", ParteReal(c1), ParteImaginaria(c1));
    printf("Segundo numero complejo: %.2f + %.2fi\n", ParteReal(c2), ParteImaginaria(c2));

    Complejo suma = Suma(c1, c2);
    printf("\nSuma: %.2f + %.2fi\n", ParteReal(suma), ParteImaginaria(suma));

    printf("Modulo del primer numero: %.2f\n", Modulo(c1));
    printf("Modulo del segundo numero: %.2f\n", Modulo(c2));

    return 0;
}