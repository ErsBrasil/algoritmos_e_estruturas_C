#include "Estrutura_AVL.h"

int altura(avl_arvore *t) {
    if (t == NULL) return -1;
    return t->altura;
}

void atualizar_altura(avl_arvore *t) {
    if (t != NULL) {
        int alt_esq = altura(t->esq);
        int alt_dir = altura(t->dir);
        t->altura = (alt_esq > alt_dir ? alt_esq : alt_dir) + 1;
    }
}

avl_arvore *rotacao_esq(avl_arvore *k1) {
    avl_arvore *k2 = k1->dir;
    k1->dir = k2->esq;
    k2->esq = k1;
    atualizar_altura(k1);
    atualizar_altura(k2);
    return k2;
}

avl_arvore *rotacao_dir(avl_arvore *k2) {
    avl_arvore *k1 = k2->esq;
    k2->esq = k1->dir;
    k1->dir = k2;
    atualizar_altura(k2);
    atualizar_altura(k1);
    return k1;
}

avl_arvore *balance_esq(avl_arvore *t) {
    if (t == NULL) return NULL;
    if (altura(t->esq) - altura(t->dir) > 1) {
        if (altura(t->esq->esq) >= altura(t->esq->dir)) {
            t = rotacao_dir(t);
        } else {
            t->esq = rotacao_esq(t->esq);
            t = rotacao_dir(t);
        }
    }
    atualizar_altura(t);
    return t;
}

avl_arvore *balance_dir(avl_arvore *t) {
    if (t == NULL) return NULL;
    if (altura(t->dir) - altura(t->esq) > 1) {
        if (altura(t->dir->dir) >= altura(t->dir->esq)) {
            t = rotacao_esq(t);
        } else {
            t->dir = rotacao_dir(t->dir);
            t = rotacao_esq(t);
        }
    }
    atualizar_altura(t);
    return t;
}

avl_arvore *balancear(avl_arvore *t) {
    if (t == NULL) return NULL;
    atualizar_altura(t);
    int balanceamento = altura(t->esq) - altura(t->dir);
    if (balanceamento > 1)
        return balance_esq(t);
    else if (balanceamento < -1)
        return balance_dir(t);
    return t;
}

avl_arvore *add_Heap(avl_arvore *t, int chave) {
    if (t == NULL) {
        avl_arvore *novo = (avl_arvore *)malloc(sizeof(avl_arvore));
        novo->chave = chave;
        novo->altura = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }
    if (chave < t->chave)
        t->esq = add_Heap(t->esq, chave);
    else if (chave > t->chave)
        t->dir = add_Heap(t->dir, chave);
    else
        return t;
    return balancear(t);
}

bool buscar(avl_arvore *t, int chave) {
    if (t == NULL) return false;
    if (chave == t->chave) return true;
    if (chave < t->chave)
        return buscar(t->esq, chave);
    else
        return buscar(t->dir, chave);
}



