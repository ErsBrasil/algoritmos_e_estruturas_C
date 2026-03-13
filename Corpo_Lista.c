#include <stdio.h>
#include <stdlib.h>
#include "Corpo_Lista.h"
int i;

Ini_Lista(Lista * l){///Zera todos os valores da Lista
  l->Elementos = 0;
   for(i = 0; i < TAMANHO_DA_LISTA; i++){l->Dado[i] = 0;}
return 1;
}

Ins_Lista(Lista * l){///A lista Recebera valores Aleatorios no Array
   for(i = 0; i < (TAMANHO_DA_LISTA); i++){
        l->Elementos = i;
           l->Dado[i] = rand();
}}

Checar_Lista(Lista * l){///Mostra todos os valores da Lista

  printf("Sao %d Elementos de %d\n", l->Elementos + 1 , TAMANHO_DA_LISTA);//Colocar If pois IF 0 Elementos?

 for(i = 0; i < TAMANHO_DA_LISTA; i++){

  printf("Posicao [%d] de Valor %d\n", i, l->Dado[i]);
}}

Busca_Lista(Lista l, datas val){///Buscar uma posição aleatoria
    printf("Digite o N que Porcura:");
    scanf("%d", & val);

    for(i = 0; i<TAMANHO_DA_LISTA; i++){
        if(val == l.Dado[i]){printf("O N se encontra na P[%d]", i); return 1;}
 }
 printf("O N nao se encontra na lsita");return -1;}

 Ord_Lista(){


 }
