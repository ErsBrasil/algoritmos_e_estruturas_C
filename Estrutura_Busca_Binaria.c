#include "Estrutura_Busca_Binaria.h"
int Vezes, k;

void Alocacao_Heap(No **no, int valor){

    No *passagem = malloc(sizeof(No));

    passagem->aponta = NULL;

    No *atual = *no;

    while( atual->aponta != NULL){

        atual = atual->aponta;

    } passagem->Dado = valor;
    atual->aponta = passagem;

}

void add( No **no ){ int valor;   *no->indice = 0;


    printf("Vezes: "); scanf("%d", & Vezes);
    for(int i = 0; i<Vezes; i++){

            no->indice++;

        scanf("%d", & valor); Alocacao_Heap(no, valor);
    }

}

//MAIS DIFICIL DO QUE EU PENSEI, FUI INVENTAR MODA DE USAR MALLOC DEU ERRADO
//PEGUEI MINHA ARVORE DO BECROWD
void Heap_Minimo(No no){

 int aux, i = Vezes/2 -1 ;

 while(i >= 0){ int meio = i;
                int Esquerda = meio * 2 + 1, Direita = (meio * 2 + 1)+1;

    ///Se tiver filho for true
    while( (Array[meio] > Array[Esquerda] && Esquerda < Vezes)  ||
          (Array[meio] > Array[Direita] && Direita < Vezes) ){

        if( Array[Esquerda] < Array[Direita]){///Esquerda Muda

      ///Troca  os Valores Maior V pelo Menor V
   aux = Array[meio]; Array[meio] = Array[Esquerda]; Array[Esquerda] = aux;
    aux = Esquerda; Esquerda = meio; meio = aux; ///Troca Posi

    }else{///Direita Muda

    ///Troca os Valores Maior V pelo Menor V
   aux = Array[meio]; Array[meio] = Array[Direita]; Array[Direita] = aux;
    aux = Direita; Direita = meio; meio = aux;} ///Troca Posi

            Esquerda = meio * 2 + 1;
            Direita = Esquerda + 1;
  }i--;
 } for(k = 0; k < Vezes; k++){
         printf("%d ", Array[k]);
    }printf("\n");
}
