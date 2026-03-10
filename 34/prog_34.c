#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double aumento, sal_func;

    printf("Digite o valor do salário do funcionário: \n");
    scanf("%lf", &sal_func);
    printf("Digite o valor do aumento em porcentagem: \n");
    scanf("%lf", &aumento);

    printf("O novo salário do funcionário com base no aumento de %lf é de %lf reais");

    system("pause");
    return 0;
}