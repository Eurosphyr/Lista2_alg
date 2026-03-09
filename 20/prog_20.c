#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double nota_al1, nota_al2, nota_al3;

    printf("Insira os valores da nota 1, nota 2 e nota 3: ");
    
    if (scanf("%lf %lf %lf", &nota_al1, &nota_al2, &nota_al3) != 3)
    {
        printf("Erro: Por favor, insira números válidos.\n");
        return 1;
    }
    double media = (nota_al1 + nota_al2 + nota_al3) / 3.0;
    printf("A média das notas é: %.2lf\n", media);
    system("pause");
    return 0;
}