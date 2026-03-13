#ifndef CORPO_LISTA_H
#define CORPO_LISTA_H

#define TAMANHO_DA_LISTA 10

typedef int datas;

typedef struct{
datas Dado[TAMANHO_DA_LISTA];
datas Elementos;
}Lista;

datas Ini_Lista();///Zera todos os valores da Lista

datas Ins_Lista();///A lista Recebera valores Aleatorios no Array

datas Checar_Lista();///Mostra todos os valores da Lista

datas Busca_Lista();///Buscar uma posição aleatoria

datas Ord_Lista();///Ordena a Lista de froma recrusiva

#endif // CORPO_LISTA_H_INCLUDED
