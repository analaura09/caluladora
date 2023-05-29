#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Bibliotecas ultilizadas no código

int menu()
{
    int i;
    int resposta;
    // Declaração de contador e da variavel de resposta

    setlocale(LC_ALL, "pt_BR.UTF-8");

    for (i = 0; i < 30; i++)
    {
        printf("-");
    }
    // Loop para gerar linha tracejada
    printf("\nC A L C U L A D O R A\n");
    // Print de titulo do programa
    for (i = 0; i < 30; i++)
    {
        printf("-");
    }
    // Loop para gerar linha tracejada

    sleep(3);

    printf("\n1- ADIÇÃO\n");
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
    // Opções de opeações da calculadora

    do
    {
        printf("Escolha o numero da operacao desejada:\n");
        scanf("%d", &resposta);
        // Receber a opção de operação desejada

        if (resposta > 10)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
        // Validar se a opção digitada possui nas opções acima

        else if (resposta == 0)
        {
            exit(0);
        }
        // Validar se a resposta for 0, encerra o programa

    } while (resposta > 10);

    return resposta;
}

int main()
// Função contendo as operações matematicas
{
    int resposta, num1, num2;
    double angulo, radianos;
    char escolha;

    resposta = menu();

    if (resposta == 1)
    {
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);

            printf("O resultado e %d \n", num1 + num2);
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {
            resposta = menu();
        }
    }

    if (resposta == 2)
    {
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);

            printf("O resultado e %d \n", num1 - num2);
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
    }

    if (resposta == 3)
    {
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");

            scanf("%d", &num2);
            if (num2 == 0)
            {
                printf("Nao e possivel dividir por 0.\n");
            }
            else
            {
                printf("O resultado e %d\n", num1 / num2);
            }

            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
    }

    if (resposta == 4)
    {
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);

            printf("O resultado e %d \n", num1 * num2);
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {

            menu();
        }
    }

    if (resposta == 5)
    {
        do
        {
            printf("Digite o angulo:\n");
            scanf("%lf", &angulo);

            radianos = angulo * (M_PI / 180.0);

            printf("O seno de %.2lf e %4lf \n", angulo, sin(radianos));
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
    }

    if (resposta == 6)
    {
        do
        {
            printf("Digite o angulo:\n");
            scanf("%lf", &angulo);

            radianos = angulo * (M_PI / 180.0);

            printf("O cosseno de %.2lf e %4lf \n", angulo, cos(radianos));
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
    }

    if (resposta == 7)
    {
        do
        {
            printf("Digite o angulo:\n");
            scanf("%lf", &angulo);

            radianos = angulo * (M_PI / 180.0);

            printf("A tangente de %.2lf e %4lf \n", angulo, tan(radianos));
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
        } while (escolha == 'N' || escolha == 'n');

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
    }

    return 0;
}
