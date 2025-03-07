#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <math.h>

// Definición de la estructura Complejo
typedef struct {
    double real;
    double imaginario;
} Complejo;

// Declaración de funciones (pero SIN implementarlas)
Complejo Crear(double r, double i);
Complejo AsignaReal(Complejo c, double r);
Complejo AsignaImaginaria(Complejo c, double i);
double ParteReal(Complejo c);
double ParteImaginaria(Complejo c);
double Modulo(Complejo c);
Complejo Suma(Complejo c1, Complejo c2);

#endif