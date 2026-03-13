#include "fila.h"

///Inicializa a fila
void queue_init(fila * f){
    f->qtd = f->inicio = f->fim = 0;
}

///Verifica se a fila ta vazia
bool queue_empty(fila f){
    return f.qtd == 0;
}

///Verifica se a fila ta cheia
bool queue_full(fila f){
    return f.qtd == TAM_MAX;
}

///Coloca um valor novo na fila
bool enqueue(fila * f, t_dado v){
    if(queue_full(*f)){
        return false;
    }


    f->itens[f->fim] = v;
    f->fim = (f->fim + 1)%TAM_MAX;
    f->qtd++;

    return true;
}


///Remove um valor da fila
bool dequeue(fila * f, t_dado * v){
    if(queue_empty(*f)){
        return false;
    }


    *v = f->itens[f->inicio];
    f->inicio = (f->inicio + 1)%TAM_MAX;
    f->qtd--;

    return true;
}

///Mostra a fila na tela
void print_queue(fila f){
    int i, j;
    for(i = 0, j = f.inicio; i < f.qtd; i++){
        printf("[%d]", f.itens[j]);
        j = (j + 1)%TAM_MAX;
    }
    printf("\n");
}
