#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;

    printf("Insira dois números inteiros (não use zero para divisões): ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Erro: Por favor, insira números válidos.\n");
        return 1;
    }

    printf("A soma de %d e %d é: %d\n", a, b, a + b);
    printf("A diferença entre %d e %d é: %d\n", a, b, a - b);
    printf("A diferença entre %d e %d é: %d\n", b, a, b - a);
    printf("O produto de %d e %d é: %d\n", a, b, a * b);

    if (b != 0)
    {
        printf("O quociente de %d e %d é: %d\n", a, b, a / b);
        printf("O resto da divisão de %d por %d é: %d\n", a, b, a % b);
    }
    else
    {
        printf("Não é possível dividir por zero (b = 0).\n");
    }

    if (a != 0)
    {
        printf("O quociente de %d e %d é: %d\n", b, a, b / a);
        printf("O resto da divisão de %d por %d é: %d\n", b, a, b % a);
    }
    else
    {
        printf("Não é possível dividir por zero (a = 0).\n");
    }
    system("pause");
    return 0;
}