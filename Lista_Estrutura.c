#include "lista_estrutura.h"
int posi = TAMANHO_MAXIMO -1; float valor;

void fun_inicializarLista(Lista *l){l->quant_elementos = 0;

    while(posi >= 0){
                    l->No[posi] = malloc(sizeof(float));
                    *l->No[posi--] = NULL;}
}

void fun_inserirElemento(Lista *l){ printf("\n\nDigite Posi e Valo: ");

  if(l->quant_elementos != (TAMANHO_MAXIMO -1)){l->quant_elementos++;
      scanf("%d %f", & posi ,& valor); *(float*)l->No[posi] = valor;
   }else{printf("\n\nLISTA CHEIA!!!\n\n");}

}

void fun_removerElemento(Lista *l){printf("\n\nDigite Posi a ser remov: ");

  if(l->quant_elementos > 0){l->quant_elementos--;

    scanf("%d", & posi); *l->No[posi] = NULL;

  }else{printf("\n\nLISTA VAZIA!!!\n\n");}

}

int fun_acessarElemento(Lista *l){
    printf("\n\nDigite a Posi: ");
    scanf("%d", posi);

  if( *l->No[posi] != NULL){
        printf("\nPosicao %d com valor %f\n\n", posi, *(float*)l->No[posi]);
                                                          return 1;
  }else{printf("\n\nPosicao Vazia!!!\n\n");
        return 1;}

}

int fun_exibirLista(Lista *l){posi = 0;

   if( l->quant_elementos > 0 ){printf("\n\n");

    while( (TAMANHO_MAXIMO -1) >= posi ){
        if(*l->No[posi] != NULL) printf("%.1f ", *(float*)l->No[posi]);
        posi++;} return 1;

    }else{printf("\n\nLISTA VAZIA!!!\n\n"); return 0;}

}
