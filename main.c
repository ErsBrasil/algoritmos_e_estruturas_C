#include <stdio.h>
#include <time.h>
#include "fila.h"

int main()
{

    fila f;
    t_dado retorno;
    queue_init(&f);
    srand(408);

    while(true){
        if(rand()%2 == 0){
            if(!enqueue(&f, rand()%100)){
                printf("Fila cheia!\n");
            } else {
                print_queue(f);
            }
        } else {
            if(!dequeue(&f, &retorno)){
                printf("Fila vazia!\n");
            } else {
                printf("[%d] removido!\n", retorno);
            }
        }
    }
    return 0;
}
