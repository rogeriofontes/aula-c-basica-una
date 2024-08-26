#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main()
{

    int resultado = soma(5, 3);
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}