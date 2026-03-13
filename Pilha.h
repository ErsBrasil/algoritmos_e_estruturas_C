#ifndef PILHA_H_
#define PILHA_H_

#define TAMANHO_MAXIMO 5

typedef char Dados_Char; typedef int Dados_Int;

typedef struct{
Dados_Int String_Array[TAMANHO_MAXIMO]; ///Passar para void e fazer Teste
Dados_Int Topo;
}Pilha;

void Inic_Pilha();

void Inserir_String();

void Imprimir_Contrario();

void Verifica_Espressao();

void Valores_Inteiros();

void Impar_Vs_Par();

void Mostrar_Posi();

void Desempilhar();

#endif // PILHA_H_
