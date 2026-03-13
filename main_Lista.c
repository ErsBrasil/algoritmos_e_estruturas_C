#include <stdio.h>
#include "Corpo_Lista.h"
///Problema entre "->" e "."
int main(){

Lista l;

srand(time(NULL));

Ini_Lista(&l);Ins_Lista(&l);Checar_Lista(&l);//Base

Busca_Lista(&l);
return 0;
}
