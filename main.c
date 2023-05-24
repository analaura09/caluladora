#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int i;
    int resposta;

    for (i = 0; i < 30; i++)
    {
        printf("-");
    }
    printf("\nIniciando calculadora...\n");
    for (i = 0; i < 30; i++)
    {
        printf("-");
    }

    sleep(3);

    printf("\n1- SOMA\n");
    printf("2- ADICAO\n");
    printf("3- SUBTRACAO\n");
    printf("4- DIVISAO\n");
    printf("5- MULTIPLICACAO\n");
    printf("6- SENO\n");
    printf("7- COSSENO\n");
    printf("8- TANGENTE\n");
    printf("9- EXPONENCIAL\n");
    printf("10- RADICIACAO\n");
    printf("11- RAIZ QUADRADA\n");

    do
    {
        printf("Escolha o numero da operacao desejada:\n");
        scanf("%d", &resposta);

        if (resposta > 11 || resposta < 1)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (resposta > 11 || resposta < 1);

    return resposta;
}

int main()
{
    int resposta;
    float num, soma = 0;

    resposta = menu();

    if (resposta == 1)
    {
        printf("ui");
    }

    return 0;
}
