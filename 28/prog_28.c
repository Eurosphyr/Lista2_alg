#define _USE_MATH_DEFINES
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double raio, altura, area_total, litros, latas_nao_cheias, custo;
    int latas_int;

    printf("Digite o raio do tanque (m): ");
    scanf("%lf", &raio);
    printf("Digite a altura do tanque (m): ");
    scanf("%lf", &altura);

    area_total = (2 * M_PI * pow(raio, 2)) + (2 * M_PI * raio * altura);
    litros = area_total / 3.0;
    latas_int = (int)ceil(litros / 5.0);
    custo = latas_int * 50.0;

    printf("Área total do tanque: %.2lf m²\n", area_total);
    printf("Litros de tinta necessários: %.2lf L\n", litros);
    printf("Quantidade de latas de 5L a comprar: %d\n", latas_int);
    printf("Custo total: R$ %.2f\n\n", custo);

    system("pause");
    return 0;
}