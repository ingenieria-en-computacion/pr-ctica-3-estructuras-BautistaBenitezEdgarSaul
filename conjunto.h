#ifndef _CONJUNTO_H_
#define _CONJUNTO_H_

#define TAM 1000
#include <stdbool.h>

typedef int DATO;

typedef struct Conjunto {
    DATO datos[TAM];
    short cant;
} Conjunto;

Conjunto conjunto_vacio();
Conjunto agregar(Conjunto, DATO);
bool pertenece(Conjunto, DATO);
Conjunto quitar(Conjunto, DATO);
bool es_vacio(Conjunto);
int cardinal(Conjunto);
Conjunto union_conjuntos(Conjunto, Conjunto);
void print_conjunto(Conjunto);

#endif
