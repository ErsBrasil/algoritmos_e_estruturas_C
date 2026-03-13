#include "Estrutura_Pilha.h"


bool fun_inicializarPilha(Pilha *p){

 p->Topo = 0; printf("Pilha Iniciada, Seu Topo = %d\nSendo possivel add %d valores\n\n", p->Topo, (TAMANHO_MAXIMO -1));

return true;
}

bool fun_pilhaCheia(Pilha *p){

   if(p->Topo == (TAMANHO_MAXIMO - 1)){printf("Pilha cheia\n\n"); return true;
   }else{ printf("A pilha ainda comporta %d valores\n\n", ((TAMANHO_MAXIMO -1) - p->Topo)); return false;}

}

bool fun_push(Pilha *p){

   if(fun_pilhaCheia(p) == true){printf("Pilha Cheia\n\n"); return false;
     }else{
         printf("Ensira um valor para o Novo Topo\n\n");
        scanf("%f", & p->Array[++p->Topo]); printf("\nNovo Topo, de posi %d com valor de %.1f\n\n", p->Topo, p->Array[p->Topo]);
        return true;}

}

bool fun_pilhaVazia(Pilha *p){

        if(p->Topo > 0){return false;
        }else{ printf("A pilha se encontra Vazia!!\n\n"); return true;}

}

bool fun_pop(Pilha *p){

    if(fun_pilhaVazia(p) == false){printf("Posi Anterior do TOPO %d\n", p->Topo);
                            printf("Agora Posi atual Topo = %d\n\n", --p->Topo); return true;
        }else{ return false;}

}

bool fun_peek(Pilha *p){

    if(fun_pilhaVazia(p) == false){printf("\nValor do Topo = %.1f\n\n", p->Array[p->Topo]); return true;
    }else{ return false;}

}

bool fun_exibirPilha(Pilha *p){

    while(fun_pilhaVazia(p) == false){
        printf("\nValor do Topo = %.1f\n\n", p->Array[p->Topo]);
        fun_pop(p);
    }

}

