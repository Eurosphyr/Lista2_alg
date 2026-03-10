#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    printf("Digite o número desejado para a tabuada: \n");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }

    system("pause");
    return 0;
}