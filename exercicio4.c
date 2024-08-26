#include<stdio.h>

int main() {

    int opcao = 2;
    
    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada\n");
            break;
        case 2:
            printf("Opção 2 selecionada\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}