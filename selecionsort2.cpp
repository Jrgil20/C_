#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int valor;
    struct Nodo* siguiente;
};

typedef struct Nodo Nodo;

struct Pila {
    Nodo* tope;
};

typedef struct Pila Pila;

Pila* crearPila() {
    Pila* pila = (Pila*)malloc(sizeof(Pila));
    if (pila == NULL) {
        printf("Error al crear la pila. Memoria insuficiente.\n");
        return NULL;
    }

    pila->tope = NULL;
    return pila;
}

int vacio(Pila* pila) {
    return pila->tope == NULL;
}

void apilar(Pila* pila, int valor) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) {
        printf("Error al apilar el valor. Memoria insuficiente.\n");
        return;
    }

    nuevoNodo->valor = valor;
    nuevoNodo->siguiente = pila->tope;
    pila->tope = nuevoNodo;
}

int desapilar(Pila* pila) {
    if (vacio(pila)) {
        printf("La pila está vacía. No se puede desapilar.\n");
        return -1; // Valor sentinela para indicar error
    }

    Nodo* nodoDesapilado = pila->tope;
    int valorDesapilado = nodoDesapilado->valor;
    pila->tope = nodoDesapilado->siguiente;
    free(nodoDesapilado);
    return valorDesapilado;
}

int tope(Pila* pila) {
    if (vacio(pila)) {
        printf("La pila está vacía. No hay un tope.\n");
        return -1; // Valor sentinela para indicar error
    }

    return pila->tope->valor;
}

void liberarPila(Pila* pila) {
    while (!vacio(pila)) {
        desapilar(pila);
    }

    free(pila);
}

void insertarOrdenado(Pila* pila, int valor) {
    if (vacio(pila) || valor >= tope(pila)) {
        apilar(pila, valor);
        return;
    }

    int top = desapilar(pila);
    insertarOrdenado(pila, valor);
    apilar(pila, top);
}

void selectionSort(Pila* pila) {
    if (vacio(pila))
        return;

    int min = desapilar(pila);
    selectionSort(pila);
    insertarOrdenado(pila, min);
}


int main() {
    Pila* pila = crearPila();

    apilar(pila, 30);
    apilar(pila, 20);
    apilar(pila, 10);

    printf("Tope de la pila: %d\n", tope(pila));
	selectionSort(pila);
    printf("Desapilando elementos: ");
    while (!vacio(pila)) {
        int valor = desapilar(pila);
        printf("%d ", valor);
    }
    printf("\n");

    liberarPila(pila);

    return 0;
}

