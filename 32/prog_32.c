#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double base, altura, lado, raio, base_maior, base_menor, diag_maior, diag_menor, area;

    printf("a) TRIÂNGULO\n");
    printf("Digite a base e a altura: ");
    scanf("%lf %lf", &base, &altura);
    area = (base * altura) / 2;
    printf("Área do Triângulo: %.2lf\n\n", area);

    printf("b) QUADRADO\n");
    printf("Digite o valor do lado: ");
    scanf("%lf", &lado);
    area = lado * lado;
    printf("Área do Quadrado: %.2lf\n\n", area);

    printf("c) CÍRCULO\n");
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    area = M_PI * pow(raio, 2);
    printf("Área do Círculo: %.2lf\n\n", area);

    printf("d) TRAPÉZIO\n");
    printf("Digite a base maior, a menor e a altura: ");
    scanf("%lf %lf %lf", &base_maior, &base_menor, &altura);
    area = ((base_maior + base_menor) * altura) / 2;
    printf("Área do Trapézio: %.2lf\n\n", area);

    printf("e) RETÂNGULO\n");
    printf("Digite a base e a altura: ");
    scanf("%lf %lf", &base, &altura);
    area = base * altura;
    printf("Área do Retângulo: %.2f\n\n", area);

    printf("f) LOSANGO\n");
    printf("Digite a diagonal maior e a menor: ");
    scanf("%lf %lf", &diag_maior, &diag_menor);
    area = (diag_maior * diag_menor) / 2;
    printf("Área do Losango: %.2lf\n\n", area);

    system("pause");
    return 0;
}