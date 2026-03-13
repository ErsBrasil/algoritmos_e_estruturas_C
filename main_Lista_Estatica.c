#include "lista_estrutura.h"
///Entender as difernças entre void, void*...

int main(){ Lista lista, *l; int Comandos;

l = &lista; fun_inicializarLista(l);

    printf("Comandos:\n1 Para ensesir um valor\n2 para Remover um valor\n"
           "3 Para mostar uma Posi com valor\n4 Para mostar todas os valores\n"
           "-1 para Sair\n");
   while(Comandos != -1 ){printf("\nComandos: "); scanf("%d", &Comandos);
    switch(Comandos){

        case 1: fun_inserirElemento(l); break;

        case 2: fun_removerElemento(l); break;

        case 3: fun_acessarElemento(l); break;

        case 4: fun_exibirLista(l); break;

        case -1: printf("\n\nSaindo...\n"); break;

        default: printf("\n\nComando Inexistente\n\n"); break;}}

free(l);    return 0;
}


/*
void fun_ApontarHeap(Lista *l){

 l->No[posi] = malloc(sizeof(Dados));
 *(int*)l->No[posi] = 45; printf("%d", *(int*)l->No[posi]);
}*/
