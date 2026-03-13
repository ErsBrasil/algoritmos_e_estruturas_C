#include "Estrutura_Fila.h"


int main(){
   Fila fila, *f = & fila; int Receba, n = 0;

 fun_inicializarFila(f);
 printf("Coamndos:\n1 para add um valor\n2 para decrementar um valor\n3 para mostrar valor do Inicio\n4 para mostrar valor do Fim\n"
            "5 para exibir todos os valores da fila\n\nPARA SAIR DIGITE -1\n\n\n");

 while(n != -1){  printf("\n");scanf("%d", & n);  printf("\n");

 switch(n){
            case 1:
 ///add 1 valor no Array, logo em seguinda muda a Posi do fim
 fun_enqueue(f); Muda_Muda(f); break;

            case 2:
  ///Tira uma Posi do Array,e verifica se fim chegou no N-1
  Receba = fun_dequeue(f);  Muda_Muda(f); printf("Valor da Posi DECREMENTADA = %d\n", Receba); break;

            case 3:
  Receba = fun_Front(f); printf("\nValor da Posi INICIO = %d\n", Receba); break;

            case 4:
   Receba = fun_Rear(f); printf("\nValor da Posi FIM = %d\n", Receba); break;

            case 5:
  fun_exibirFila(f); break;

  case -1: printf("\n\nSAINDO...\n\n"); break;

  default:
      printf("\n\nOpracao Invalida!!!\n\n");}

 }return 0;


}
