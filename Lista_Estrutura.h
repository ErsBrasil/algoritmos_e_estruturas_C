#ifndef LISTA_ESTRUTURA_H
#define LISTA_ESTRUTURA_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 10
typedef void** Dados;///???

typedef struct{
Dados *No[TAMANHO_MAXIMO];
int quant_elementos;
}Lista;

void fun_inicializarLista(Lista *l);

void fun_ApontarHeap(Lista *l);

void fun_inserirElemento(Lista *l);

void fun_removerElemento(Lista *l);

int fun_acessarElemento(Lista *l);

int fun_exibirLista(Lista *l);

#endif // LISTA_ESTRUTURA_H_INCLUDED
