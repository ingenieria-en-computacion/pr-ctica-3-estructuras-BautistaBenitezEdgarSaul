#include "complejo.h"

// Implementación de funciones
Complejo Crear(double r, double i) {
    Complejo c;
    c.real = r;
    c.imaginario = i;
    return c;
}

Complejo AsignaReal(Complejo c, double r) {
    c.real = r;
    return c;
}

Complejo AsignaImaginaria(Complejo c, double i) {
    c.imaginario = i;
    return c;
}

double ParteReal(Complejo c) {
    return c.real;
}

double ParteImaginaria(Complejo c) {
    return c.imaginario;
}

double Modulo(Complejo c) {
    return sqrt(c.real * c.real + c.imaginario * c.imaginario);
}

Complejo Suma(Complejo c1, Complejo c2) {
    return Crear(c1.real + c2.real, c1.imaginario + c2.imaginario);
}