#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double tempo, velocidade, distancia, litros_gastos, autonomia;

    printf("Informe o tempo de viagem (horas): ");
    scanf("%lf", &tempo);

    printf("Informe a velocidade média (km/h): ");
    scanf("%lf", &velocidade);

    printf("Informe a autonomia do veículo (km por litro): ");
    scanf("%lf", &autonomia);

    distancia = tempo * velocidade;

    if (autonomia > 0)
    {
        litros_gastos = distancia / autonomia;

        printf("Distância total: %.2lf km\n", distancia);
        printf("Total de combustível gasto: %.4lf litros\n", litros_gastos);
    }
    else
    {
        printf("\nErro: A autonomia deve ser maior que zero.\n");
    }

    printf("\n");
    system("pause");
    return 0;
}