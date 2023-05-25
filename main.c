#include <stdio.h>
#include <stdlib.h>

/// Henrique - multiplicação
/// Wellington - subtração

int menu()
{
    int i;
    int resposta;

    for (i = 0; i < 30; i++)
    {
        printf("-");
    }
    printf("\nC A L C U L A D O R A\n");
    for (i = 0; i < 30; i++)
    {
        printf("-");
    }

    sleep(3);

    // printf("Digite 2 numero: ")
    // scanf("%d", num)

    printf("1- ADICAO\n");
    printf("2- SUBTRACAO\n");
    printf("3- DIVISAO\n");
    printf("4- MULTIPLICACAO\n");
    printf("5- SENO\n");
    printf("6- COSSENO\n");
    printf("7- TANGENTE\n");
    printf("8- EXPONENCIAL\n");
    printf("9- RADICIACAO\n");
    printf("10- RAIZ QUADRADA\n");

    printf("0- SAIR\n");

    do
    {
        printf("Escolha o numero da operacao desejada:\n");
        scanf("%d", &resposta);

        if (resposta > 10)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }

        else if (resposta == 0)
        {
            exit(0);
        }
        

    } while (resposta > 10);

    return resposta;
}

int main()
{
    int resposta,num1,num2;
    int soma;
    char escolha;

    resposta = menu();

    if (resposta == 1)
    {
        do
        {
            printf("Digite 2 numeros:\n");
            scanf("%d", num1, num2);

            soma = num1 + num2;
            printf("O resultado e %d \n", soma);
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s",&escolha);
        } while (escolha == 'N' || escolha == 'n');
        
        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
        

    }

    return 0;
}
