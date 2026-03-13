#ifndef ESTRUTURA_PILHA
#define ESTRUTURA_PILHA
#define TAMANHO_MAXIMO 10 /// N-1, pois o Array começa no 0, e N existe TOPO de posi 0

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef float Dados;

typedef struct{
Dados Array[TAMANHO_MAXIMO];
int Topo;
}Pilha;

bool fun_inicializarPilha(Pilha *p);

bool fun_pilhaCheia(Pilha *p);

bool fun_push(Pilha *p);

bool fun_pilhaVazia(Pilha *p);

bool fun_pop(Pilha *p);

bool fun_peek(Pilha *p);

bool fun_exibirPilha(Pilha *p);

#endif
