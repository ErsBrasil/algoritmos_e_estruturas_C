#ifndef ESTRUTURA_FILA_H
#define ESTRUTURA_FILA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO_MAXIMO 10
typedef int Dados;

typedef struct{
Dados Array[TAMANHO_MAXIMO];
int inicio, fim, cont, verif;
}Fila;

void Muda_Muda(Fila *f);

bool fun_inicializarFila(Fila *f);

bool fun_filaCheia(Fila *f);

void fun_enqueue(Fila *f);

bool fun_filaVazia(Fila *f);

int fun_dequeue(Fila *f);

int fun_Front(Fila *f);

int fun_Rear(Fila *f);

bool fun_exibirFila(Fila *f);

#endif // ESTRUTURA_FILA_H_INCLUDED
