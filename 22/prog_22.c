#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double num, parte_inteira, parte_fracionada;

    printf("Digite um número real: ");
    if (scanf("%lf", &num) != 1)
    {
        printf("Erro: Entrada inválida.\n");
        system("pause");
        return 1;
    }

    parte_fracionada = modf(num, &parte_inteira);

    printf("\na) A parte inteira do número: %.0f\n", parte_inteira);
    printf("b) A parte fracionária do número: %lf\n", parte_fracionada);
    printf("c) O arredondamento do número: %.0f\n", round(num));

    printf("\nNúmero original: %lf\n", num);

    printf("\n");
    system("pause");
    return 0;
}