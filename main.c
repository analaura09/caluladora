#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// Bibliotecas ultilizadas no código

#define ANSI_RESET "\x1b[0m"
#define ANSI_RED "\x1b[31m"
#define ANSI_GREEN "\x1b[32m"
#define ANSI_BLUE "\x1b[34m"
// Definição das sequências de escape ANSI para as cores

int menu()
{
    int i;
    int resposta;
    // Declaração de contador e da variavel de resposta

    for (i = 0; i < 30; i++)
    {
        printf(ANSI_BLUE "-");
    }
    // Loop para gerar linha tracejada
    printf(ANSI_GREEN "\nC A L C U L A D O R A\n");
    // Print de titulo do programa
    for (i = 0; i < 30; i++)
    {
        printf(ANSI_BLUE "-");
    }
    // Loop para gerar linha tracejada

    sleep(3);

    printf(ANSI_GREEN "\n1- ADICAO\n");
    printf(ANSI_GREEN "2- SUBTRACAO\n");
    printf(ANSI_GREEN "3- DIVISAO\n");
    printf(ANSI_GREEN "4- MULTIPLICACAO\n");
    printf(ANSI_GREEN "5- SENO\n");
    printf(ANSI_GREEN "6- COSSENO\n");
    printf(ANSI_GREEN "7- TANGENTE\n");
    printf(ANSI_GREEN "8- EXPONENCIAL\n");
    printf(ANSI_GREEN "9- RADICIACAO\n");
    printf(ANSI_GREEN "10- RAIZ DE POLINOMIO DO SEGUNDO GRAU\n");

    printf(ANSI_RED "0- SAIR\n");
    // Opções de opeações da calculadora

    do
    {
        printf("Escolha o numero da operacao desejada:\n");
        scanf("%d", &resposta);
        // Receber a opção de operação desejada

        if (resposta > 10 || resposta < 0)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
        // Validar se a opção digitada possui nas opções acima

        else if (resposta == 0)
        {
            exit(0);
        }
        // Validar se a resposta for 0, encerra o programa

    } while (resposta > 10 || resposta < 0);
    // Vai perguntar qual operação deseja até que a resposta seja valida

    return resposta;
}

int main()
// Função contendo as operações matematicas
{
    char escolha;
    int resposta, num1, num2;
    double a, b, c, angulo, radianos, raiz;
    // Declaração de variaveis usadas nas operações

    resposta = menu();
    // chamando a função menu

    if (resposta == 1)
    // Validando a opção escolhida no menu
    {
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);
            // recebendo os 2 numeros

            printf("O resultado e %d \n", num1 + num2);
            // Mostrando o resultado e fazendo a operação de soma
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar somando ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de soma até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {
            resposta = menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 2)
    // Validando a opção escolhida no menu
    {
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);
            // recebendo os 2 numeros

            printf("O resultado e %d \n", num1 - num2);
            // Mostrando o resultado e fazendo a operação de subtração
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar subtraindo ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de subtração até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 3)
    {
        // Validando a opção escolhida no menu
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);
            // recebendo os 2 numeros

            if (num2 == 0)
            {
                printf("Nao e possivel dividir por 0.\n");
            }
            // Validando caso o num2 seja zero, pois não é possivel dividir por 0
            else
            {
                printf("O resultado e %d\n", num1 / num2);
            }
            // Realizando a operação de divisão

            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar dividindo ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de divisão até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 4)
    {
        // Validando a opção escolhida no menu
        do
        {
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);
            printf("Digite segundo numero:\n");
            scanf("%d", &num2);
            // recebendo os 2 numeros

            printf("O resultado e %d \n", num1 * num2);
            // Mostrando o resultado e fazendo a operação de multiplicação
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar multiplicando ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de multiplicação até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {

            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 5)
    {
        // Validando a opção escolhida no menu
        do
        {
            printf("Digite o angulo em graus:\n");
            scanf("%lf", &angulo);
            // Recebendo o valor do angulo em graus

            radianos = angulo * (M_PI / 180.0);
            // transformando de graus para radianos

            printf("O seno de %.2lf e %4lf \n", angulo, sin(radianos));
            // Mostrando o resultado e calculando o seno usando a função sin
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar calculando o seno ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de calcular o seno até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 6)
    {
        // Validando a opção escolhida no menu
        do
        {
            printf("Digite o angulo em graus:\n");
            scanf("%lf", &angulo);
            // Recebendo o valor do angulo em graus

            radianos = angulo * (M_PI / 180.0);
            // transformando de graus para radianos

            printf("O cosseno de %.2lf e %4lf \n", angulo, cos(radianos));
            // Mostrando o resultado e calculando o cosseno usando a função cos
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar calculando o cosseno ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de calcular o cosseno até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 7)
    {
        // Validando a opção escolhida no menu
        do
        {
            printf("Digite o angulo:\n");
            scanf("%lf", &angulo);
            // Recebendo o valor do angulo em graus

            radianos = angulo * (M_PI / 180.0);
            // transformando de graus para radianos

            printf("A tangente de %.2lf e %4lf \n", angulo, tan(radianos));
            // Mostrando o resultado e calculando a tangente usando a função tan
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar calculando a tangente ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de calcular a tangente até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {
            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 8)
    {
        // Validando a opção escolhida no menu
        do
        {
            printf("Digite a base da exponenciacao:\n");
            scanf("%d", &num1);
            printf("Digite o valor do expoente:\n");
            scanf("%d", &num2);
            // Recebendo o valor da base do expoente e o valor do expoente

            printf("O resultado de %d elevado a %d e %.2lf \n", num1, num2, pow(num1, num2));
            // Mostrando o resultado e calculando a potencia usando a função pow, que recebe os dois valores
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar calculando a potencia ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de calcular a potencia até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {

            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 9)
    {
        do
        {
            // Validando a opção escolhida no menu
            printf("Digite um numero: ");
            scanf("%d", &num1);
            // Recebendo o valor do numero de dentro da raiz

            printf("Digite o indice da raiz: ");
            scanf("%d", &num2);
            // Recebendo o valor do indice da raiz

            raiz = pow(num1, 1.0 / num2);
            // Calculando a raiz pela biblioteca pow

            printf("A raiz %d de %d é %.4lf\n", num2, num1, raiz);
            // Mostrando o resultado da raiz
            printf("Deseja mudar a operacao: [S/N]\n");
            scanf("%s", &escolha);
            // Validando se o usuario quer continuar calculando a potencia ou voltar para o menu
        } while (escolha == 'N' || escolha == 'n');
        // continua na opção de calcular a potencia até que o usuário digite N ou n

        if (escolha == 'S' || escolha == 's')
        {

            menu();
        }
        // Voltando para o menu caso ele digite S ou s
    }

    if (resposta == 10)
    {
        // Validando a opção escolhida no menu
        printf("Digite os coeficientes do polinomio (a, b, c): ");
        scanf("%lf %lf %lf", &a, &b, &c);
        // Recebendo os valores de a, b e c

        double discriminante = b * b - 4 * a * c;
        // calculando o delta

        if (discriminante > 0)
        {
            double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            double raiz2 = (-b - sqrt(discriminante)) / (2 * a);

            printf("As raizes sao: %.2lf e %.2lf\n", raiz1, raiz2);
        }
        // Validando se o delta for maior que zero, haverá x' e x"
        else if (discriminante == 0)
        {
            double raiz = -b / (2 * a);

            printf("A raiz e: %.2lf\n", raiz);
        }
        // Validando se o delta for  igual a 0 so haverá x'
        else
        {
            printf("O polinomio nao possui raizes reais.\n");
        }
        // Caso não der match em nenhuma das outras opções não vai ser possivel delta ter raiz
    }

    return 0;
}
