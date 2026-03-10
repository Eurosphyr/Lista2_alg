#define _USE_MATH_DEFINES
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double volume, raio;

    printf("Digite o tamanho do raio da esfera: \n");
    scanf("%lf", &raio);
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    printf("O volume da esfera de raio %.2lf, é %.2lf m³\n", raio, volume);

    system("pause");
    return 0;
}