#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
Dados_Char Conversor_Char;
int i;/*printf("\n%d\n\n", p->Topo);*/ ///Mostra a Quantidade do Topo

void limparBuffer(){///Limpa a Memoria de Digitação
    int c;
    while ((c = getchar()) != '\n' && c != EOF);///Limpa a Memoria de Digitação
}
Inic_Pilha(Pilha *p){ p->Topo = 0;///Zera o Tamanho da Pilha
for(i = 0; i < TAMANHO_MAXIMO; i++){p->String_Array[i] = 0;}///Zera o Array
}


Inserir_String(Pilha p){///Recebe Os Char para a Pilha
 Dados_Int Ler_Char;

  while(p.Topo < (TAMANHO_MAXIMO-1) && (Ler_Char = getchar()) != '\n'){

   p.String_Array[p.Topo] = Ler_Char; p.Topo++;}///Recebe e manda até 9 Char para o Array de tam 10

    p.String_Array[p.Topo] = '\n';///coloca o ponto de Parada no final '\n' == 10;
}


Imprimir_Contrario(Pilha p){int Aux_T = p.Topo;///Acessa a Posi do Topo e passa para Auxiliar

  for(i = 0; i <= Aux_T; --Aux_T){

    Conversor_Char = (char) p.String_Array[Aux_T];
        printf("%c", Conversor_Char);}///Printa ao Contrario
}


Verifica_Espressao(Pilha *p){int Cont_Es = 0; int Mostrar_Posi = 0;///Arrumar Lógica Conversor String

 if(p->String_Array[0] == '(' || p->String_Array[0] == '[' ||  p->String_Array[0] == '{'){Cont_Es++; Mostrar_Posi++;}
 if(p->String_Array[p->Topo-1] == ')' || p->String_Array[p->Topo-1] == ']' ||  p->String_Array[p->Topo-1] == '}')Cont_Es++;

    switch(Cont_Es){
                case 1:
                       printf("\n\nTem apenas %d do ", Cont_Es); if(Mostrar_Posi == 1
                            ){printf("%c na pilha isso na Posicao[%d]\n\n", p->String_Array[0], 0);
                }else{ printf("%c na pilha isso na Posicao[%d]\n\n", p->String_Array[p->Topo-1], p->Topo-1); }
           break;
                case 2:
        printf("\n\nTem os %d do %c na pilha isso na Posicao[%d] e na Posicao[%d]\n\n ", Cont_Es,
                p->String_Array[0], 0, p->Topo-1);
           break;
                default:
                        printf("\n\nNao tem Nenhuma Espressao na Pilha\n\n");

                 }
}


Valores_Inteiros(Pilha *p, Pilha *pM, Pilha *p2, Pilha *p3){Dados_Int valor = 0, cont2 = 0, cont3 = 0;

    for(i = 0; i < TAMANHO_MAXIMO; i++){scanf("%d", & valor);
        p->String_Array[p->Topo++] = valor; pM->String_Array[pM->Topo++] = i;

         if((valor % 2) == 0){p2->Topo = cont2;  p2->String_Array[cont2++] = valor;
                       }else{p3->Topo = cont3; p3->String_Array[cont3++] = valor;}}
}


Impar_Vs_Par(Pilha *p2, Pilha *p3){
 if(p3->Topo > p2->Topo&& p2->Topo > 0){printf("\n\nSao %d Numeros Impares e %d Numeros Pares, Logo a Pilha de Impares e maior\n\n",p3->Topo+1, p2->Topo+1);
 }else if(p3->Topo < p2->Topo && p3->Topo > 0){printf("\n\nSao %d Numeros Impares e %d Numeros Pares, Logo a Pilha de Pares e maior\n\n",p3->Topo+1, p2->Topo+1);
 }else if(p3 ->Topo == p2->Topo){printf("\n\nSao %d Numeros Impares e %d Numeros Pares, Logo as pilhas tem o mesmo tamanho\n\n",p3->Topo+1, p2->Topo+1);
 }else if(p3->Topo > p2->Topo){printf("\n\nSao %d Numeros Impares e %d Numeros Pares, Logo a Pilha de Impares e maior\n\n",p3->Topo+1, p2->Topo);
 }else if(p3->Topo < p2->Topo){printf("\n\nSao %d Numeros Impares e %d Numeros Pares, Logo a Pilha de Pares e maior\n\n",p3->Topo, p2->Topo+1);}
}


Mostrar_Posi(Pilha *p, Pilha *pM){int Aux = pM->Topo;
        for( i = 0; pM->Topo > i; i++){printf("\nPilha na posicao [%d] com valor [%d]\n", Aux+1 , p->String_Array[--Aux]);}
}


Desempilhar(Pilha *p, Pilha *pM){

 for( i = 0; pM->Topo > i; pM->Topo--){printf("\nDesempilhando valor %d\n", p->String_Array[--p->Topo]);
   p->String_Array[p->Topo] = 0;
   pM->String_Array[p->Topo] = 0;}

}
