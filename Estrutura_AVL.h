#ifndef ESTRUTURA_AVL_H
#define ESTRUTURA_AVL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct avl_arvore {
    int chave;
    int altura;
    struct avl_arvore *esq;
    struct avl_arvore *dir;
} avl_arvore;

int altura(avl_arvore *t);

void atualizar_altura(avl_arvore *t);

avl_arvore *rotacao_esq(avl_arvore *k1);

avl_arvore *rotacao_dir(avl_arvore *k2);

avl_arvore *balance_esq(avl_arvore *t);

avl_arvore *balance_dir(avl_arvore *t);

avl_arvore *balancear(avl_arvore *t);

avl_arvore *add_Heap(avl_arvore *t, int chave);

bool buscar(avl_arvore *t, int chave);


#endif // ESTRUTURA_AVL_H_INCLUDED
