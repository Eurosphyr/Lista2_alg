#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double nota1, nota2, peso1, peso2, media;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%lf", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%lf", &peso2);

    if ((peso1 + peso2) != 0)
    {
        media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

        printf("\nSoma dos pesos: %.2f", peso1 + peso2);
        printf("\nMédia Ponderada Final: %.2f\n", media);
    }
    else
    {
        printf("\nErro: A soma dos pesos não pode ser zero.\n");
    }

    printf("\n");
    system("pause");
    return 0;
}