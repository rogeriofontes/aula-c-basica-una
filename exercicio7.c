#include <stdio.h>

int main() {
    int arr[10], maior, menor;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    maior = menor = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maior)
            maior = arr[i];
        if (arr[i] < menor)
            menor = arr[i];
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
