#ifndef ESTRUTURA_BUSCA_BINARIA_H
#define ESTRUTURA_BUSCA_BINARIA_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct No{
struct No *aponta;
int Dado, indice;
}No;

void Alocacao_Heap(No **no, int valor);

void add( No **no );

void Heap_Minimo(No no);

#endif // ESTRUTURA_BUSCA_BINARIA_H
