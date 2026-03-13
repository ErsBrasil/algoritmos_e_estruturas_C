#include "Estrutura_Fila.h"

bool fun_inicializarFila(Fila *f){ f->inicio = 0; f->fim = 0; f->cont = 0; f->verif = 0; }

void Muda_Muda(Fila *f){

 if(f->cont > f->verif){///foi add um valor

        if( f->fim == (TAMANHO_MAXIMO - 1)){f->fim = 0; ///VOlta--  && f->inicio <= f->fim) && f->fim > 0

        }else{ ++f->fim;}///++

 }else{///foi -- um valor

        if(f->inicio == (TAMANHO_MAXIMO - 1)){f->inicio = 0; ///Volta-- && f->inicio >= f->fim) && f->inicio > 0

        }else{ ++f->inicio;}///++
 }
}

bool fun_filaCheia(Fila *f){

   if(f->cont == TAMANHO_MAXIMO){ printf("\n\nA fila se encontra Cheia!!!\n\n"); return true;
   }else{ return false; }

}

void fun_enqueue(Fila *f){

    if(fun_filaCheia(f) == false){f->cont++; scanf("%d", & f->Array[f->fim]);}


}

bool fun_filaVazia(Fila *f){

    if(f->cont ==  0){ printf("\nA fila se encontra Vazia!!!\n\n"); return true;
    }else{return false;}

}

int fun_dequeue(Fila *f){

   if(fun_filaVazia(f) == true){ return -1;
   }else{f->verif == f->cont; --f->cont;
                return f->Array[f->inicio];}

}

int fun_Front(Fila *f){

    if(fun_filaVazia(f) == false) return f->Array[f->inicio];
    else return -1;

}

int fun_Rear(Fila *f){

    if(fun_filaVazia(f) == false) return f->Array[f->fim];
    else return -1;

}

bool fun_exibirFila(Fila *f){ int i = f->inicio, i2 =  f->fim;

        if(f->inicio > f->fim){ i = f->fim; i2 = f->inicio;}

    if(fun_filaVazia(f) == false){ while(i < i2){ printf("%d ", f->Array[i]);         ++i;}
           printf("\n\n"); return true;
    }else return false;


}

