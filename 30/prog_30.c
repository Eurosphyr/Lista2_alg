#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double sal_min, sal_func;

    printf("Digite o valor do salário do funcionário: \n");
    scanf("%lf", &sal_func);
    printf("Digite o valor do salário mínimo: \n");
    scanf("%lf", &sal_min);
    printf("O número de salários mínimos que o funcionário recebe é %.2lf salários mínimos\n", sal_func / sal_min);

    system("pause");
    return 0;
}