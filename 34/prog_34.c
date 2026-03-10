#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double aumento, sal_func, percentual, sal_aum;

    printf("Digite o valor do salário do funcionário: \n");
    scanf("%lf", &sal_func);
    printf("Digite o valor do aumento em porcentagem: \n");
    scanf("%lf", &percentual);

    aumento = sal_func * (percentual / 100.0);
    sal_aum = sal_func + aumento;

    printf("O novo salário do funcionário com base no aumento de %.2lf é de %.2lf reais\n", aumento, sal_aum);

    system("pause");
    return 0;
}