#include "Estrutura_AVL.h"

int main() {
    avl_arvore *raiz = NULL;
    int opcao, valor;

    while (1) {
        printf("\n1 - Inserir valor\n2 - Buscar valor\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            raiz = add_Heap(raiz, valor);
            printf("Valor %d inserido.\n", valor);

        } else if (opcao == 2) {
            printf("Digite o valor que deseja buscar: ");
            scanf("%d", &valor);
            if (buscar(raiz, valor))
                printf("Valor %d encontrado na arvore.\n", valor);
            else
                printf("Valor %d NAO encontrado na arvore.\n", valor);

        } else if (opcao == 0) {
            printf("Encerrando.\n");
            break;

        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}
