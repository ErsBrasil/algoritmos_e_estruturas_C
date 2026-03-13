#include "Estrutura_Pilha.h"
Pilha pilha;

int main(){Pilha *ponteiro_pilha = & pilha;


  fun_inicializarPilha(ponteiro_pilha);

  while(fun_pilhaCheia(ponteiro_pilha) == false){

    fun_push(ponteiro_pilha);

  }

  fun_exibirPilha(ponteiro_pilha);

    return 0;
}
