#include "conjunto.h"
#include <stdio.h>

Conjunto conjunto_vacio() {
    Conjunto c;
    c.cant = 0;
    return c;
}

Conjunto agregar(Conjunto c, DATO d) {
    if (!pertenece(c, d) && c.cant < TAM) {
        c.datos[c.cant] = d;
        c.cant++;
    }
    return c;
}

bool pertenece(Conjunto c, DATO d) {
    for (int i = 0; i < c.cant; i++) {
        if (c.datos[i] == d) return true;
    }
    return false;
}

Conjunto quitar(Conjunto c, DATO d) {
    int i = 0;
    if (pertenece(c, d)) {
        for (; i < c.cant; i++) {
            if (c.datos[i] == d) break;
        }
        for (int j = i + 1; j < c.cant; j++) {
            c.datos[j - 1] = c.datos[j];
        }
        c.cant--;
    }
    return c;
}

bool es_vacio(Conjunto c) {
    return c.cant == 0;
}

int cardinal(Conjunto c) {
    return c.cant;
}

Conjunto union_conjuntos(Conjunto c, Conjunto d) {
    for (int i = 0; i < d.cant; i++) {
        c = agregar(c, d.datos[i]);
    }
    return c;
}

void print_conjunto(Conjunto c) {
    printf("{ ");
    for (int i = 0; i < c.cant; i++) {
        printf("%d ", c.datos[i]);
    }
    printf("}\n");
}
