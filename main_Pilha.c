#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
///Adendo é de estrma Improtancia Add "push" e "pop" "top" entre outros...

int main(){Pilha pi, piMos, pi2, pi3; ///Referencia principal Heap
Pilha * p = & pi, *pM = & piMos ,*p2 = & pi2, *p3 = & pi3;///Stack
Dados_Char Escolher_Tipo;

Inic_Pilha(p); Inic_Pilha(piMos); Inic_Pilha(p2); Inic_Pilha(p3);

printf("Digite String para char ou Numero para int\n\n");
scanf("%c", &Escolher_Tipo); limparBuffer();

    switch(Escolher_Tipo){
        case 's': case 'S':
            Inserir_String(p);Imprimir_Contrario(p);Verifica_Espressao(p);
            break;

        case 'n': case 'N':
 printf("\n\nVoce Escolheu Operacao de Inteiros\nDigite %d Nuemros Inteiros\n\n", TAMANHO_MAXIMO);
 Valores_Inteiros( p , pM , p2 , p3 ); printf("\nPilha Cheia\n\n");
    printf("\n\nOtimo!!\nAgora escolha entre 3 Ops\n\n'Vs' para mostar quantos impares e Pares Tem na Pilha\n\n");
    printf("'Mos' para mostar os Elemenstos da Pilha e suas posicoes\n\n'Des' para retirar todos os elementos da Pilha\n\n");

              limparBuffer();  scanf("%c", &Escolher_Tipo);
                switch(Escolher_Tipo){///implemantar interatividade para alterar valor da PILHA principal
                    case 'v': case 'V':
                            Impar_Vs_Par( p2, p3 );
                break;
                    case 'm': case 'M':
                            Mostrar_Posi( p, pM );
                break;
                    case 'd': case 'D':
                            Desempilhar( p, pM);
                break;

               }break;

        default:
            printf("Operacao Invalida");
           }

return 0;
}
