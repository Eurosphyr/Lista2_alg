#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double num1, num2, num3, maior;

    printf("Digite o primeiro número inteiro: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%lf", &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        maior = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        maior = num2;
    }
    else
    {
        maior = num3;
    }
    printf("Números digitados: %.2lf, %.2lf, %.2lf\n", num1, num2, num3);
    printf("O maior número e: %.2lf\n", maior);

    printf("%.2lf > %.2lf? %s\n", num1, num2, (num1 > num2) ? "SIM" : "NAO");
    printf("%.2lf > %.2lf? %s\n", num1, num3, (num1 > num3) ? "SIM" : "NAO");
    printf("%.2lf > %.2lf? %s\n", num2, num3, (num2 > num3) ? "SIM" : "NAO");

    system("pause");

    return 0;
}