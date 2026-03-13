#ifndef FILA_H_
#define FILA_H_

#include <stdbool.h>

#define TAM_MAX 10

typedef int t_dado;
typedef struct {
    t_dado itens[TAM_MAX];
    int inicio, fim, qtd;
} fila;

///Inicializa a fila
void queue_init(fila * f);
///Verifica se a fila ta vazia
bool queue_empty(fila f);
///Verifica se a fila ta cheia
bool queue_full(fila f);
///Coloca um valor novo na fila
bool enqueue(fila * f, t_dado v);
///Remove um valor da fila
bool dequeue(fila * f, t_dado * v);
///Mostra a fila na tela
void print_queue(fila f);


#endif // FILA_H_
