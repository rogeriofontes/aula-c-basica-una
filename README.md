# Aula de Introdução à Linguagem C

## 1. Introdução à Linguagem C

### História e Usos
- Desenvolvida por Dennis Ritchie em 1972 no Bell Labs.
- Linguagem de baixo nível, usada para sistemas operacionais (ex: UNIX), aplicações embutidas e programação de sistemas.
- Amplamente usada em desenvolvimento de software de alto desempenho.

### Sintaxe Básica
- Arquivo-fonte típico: `arquivo.c`
- Estrutura básica de um programa em C:

```c
#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() {
    printf("Olá, Mundo!\n");
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
```

### Estruturas de Controle: Condicionais

#### if / Else
```c
#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
    int x = 10;

    if (x > 5)
    {
        printf("x é maior que 5\n");
    }
    else
    {
        printf("x é menor ou igual a 5\n");
    }

    return 0;
}
```
#### Else If
```c
#include <stdio.h>

int main()
{

    int nota = 85;

    if (nota >= 90)
    {
        printf("Nota A\n");
    }
    else if (nota >= 80)
    {
        printf("Nota B\n");
    }
    else
    {
        printf("Nota C\n");
    }
    
    return 0;
}
```
#### Switch / Case
```c
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
```

### Estruturas de Repetição: Loops

#### For Loop
```c
#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Iteração %d\n", i);
    }

    return 0;
}
```
#### While Loop
```c
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 5)
    {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
```
#### Do-While Loop
```c
#include <stdio.h>

int main()
{

    int j = 0;
    do
    {
        printf("j = %d\n", j);
        j++;
    } while (j < 5);

    return 0;
}
```
### Funções em C
#### Definição e Chamada de Funções, com Parâmetros e Retorno
```c
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
```
#### Definição e Chamada de Funções, sem Retorno (void)
```c
#include <stdio.h>

void saudacao() {
    printf("Bem-vindo ao programa!\n");
}

int main() {
    saudacao();

    return 0;
}
```

### Exemplo Práticos
#### 1 - Verificar se um número é par ou ímpar
```c
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é par\n", numero);
    } else {
        printf("%d é ímpar\n", numero);
    }

    return 0;
}

```
#### 2 - Somar todos os números de 1 a 100
```c
#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma de 1 a 100 é: %d\n", soma);

    return 0;
}

```
#### 3 - Calcular o fatorial de um número usando recursão
```c
#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O fatorial de %d é: %d\n", numero, fatorial(numero));

    return 0;
}
```

# Lista de Exercícios de C

1. **Verificar se um Número é Par ou Ímpar**  
   Escreva um programa que solicite ao usuário um número e verifique se ele é par ou ímpar.

2. **Calcular a Soma de Números de 1 a N**  
   Crie um programa que solicite ao usuário um número N e calcule a soma de todos os números de 1 a N.

3. **Verificar se um Número é Primo**  
   Escreva um programa que verifique se um número fornecido pelo usuário é um número primo.

4. **Imprimir a Tabela de Multiplicação**  
   Faça um programa que solicite ao usuário um número e imprima a tabela de multiplicação desse número até 10.

5. **Inverter uma String**  
   Crie um programa que leia uma string fornecida pelo usuário e a imprima invertida.

6. **Calcular o Fatorial de um Número**  
   Escreva um programa que calcule o fatorial de um número dado usando uma função.

7. **Encontrar o Maior e o Menor Elemento de um Array**  
   Faça um programa que leia 10 números inteiros em um array e exiba o maior e o menor valor.

8. **Ordenar um Array de Números em Ordem Crescente**  
   Implemente um algoritmo de ordenação (como Bubble Sort) para ordenar um array de números inteiros em ordem crescente.

9. **Converter Temperatura de Celsius para Fahrenheit**  
   Escreva um programa que converta uma temperatura fornecida pelo usuário de graus Celsius para Fahrenheit.

10. **Contar o Número de Vogais em uma String**  
    Crie um programa que conte o número de vogais (a, e, i, o, u) em uma string fornecida pelo usuário.

### Use o F6 ou F7 para compilar e executar o codigo.

## Como instalar o ggc no windows: 
### Siga o tutorial: https://terminalroot.com.br/2022/12/como-instalar-gcc-gpp-mingw-no-windows.html

### Extensões:
C/C++
v1.21.6
--
C/C++ Compile Run
v1.0.58
