#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
    int voltar;
    int saldo = 2; // saldo
    int iniciar;   // iniciar
    int aposta;    // valor da aposta
    char ap;       // par ou impar
    int num;       // valor entre 1-0
    int recu;      // reiniciar

    system("cls");
    printf("quer jogar?\n");
    printf("Se sim ( 1 ), se nao ( 2 )\n");
    printf("R: ");
    scanf("%d", &iniciar);
    system("cls");

    do
    {
        if (saldo == 0)
        {   
            system("cls");
            printf("---------------------");
            printf("\nVoce esta falido!");
            printf("\nFichas: %d", saldo);
            printf("\nDigite 1 para ganhar 2 fichas!");
            printf("\nDigite 2 para sair!");
            printf("\nDigite um valor: ");
            scanf("%d", &recu);
            if (recu == 1)
            {
                printf("REINICIANDO!");
                saldo = 2;
                system("cls");
            }
            else if (recu == 2)
            {
                
            }
        }
        printf("Fichas: %d", saldo);
        printf("\n* Digite o valor da aposta: ");
        scanf("%d", &aposta);

        if (aposta <= saldo)
        {
            printf("* Par ou Impar:");
            scanf(" %c", &ap);
            printf("%c", ap);

            if (ap == 'p')
            {
                system("cls");
                printf("* Escolheu PAR");
                srand(time(NULL));
                num = rand() % 2;

                if (num == 0)
                {
                    printf("\n* VOCE GANHOU!");
                    saldo = saldo + aposta;
                    printf("\nSALDO: %d", saldo);
                }
                else if (num == 1)
                {
                    printf("\n* Voce perdeu");
                    saldo = saldo - aposta;
                    printf("\nSALDO: %d", saldo);
                }
            }
            else if (ap == 'i')
            {
                system("cls");
                printf("\n* Escolheu IMPAR");
                srand(time(NULL));
                num = rand() % 2;

                if (num == 0)
                {
                    printf("\n* VOCE GANHOU");

                    saldo = saldo + aposta;
                    printf("\nSALDO: %d", saldo);
                }
                else if (num == 1)
                {
                    printf("\n* Voce perdeu");

                    saldo = saldo - aposta;
                    printf("\nSALDO: %d", saldo);
                }
            }
        }
printf("\n-------------------------");
        printf("\nquer Continuar?\n");
        printf("Se sim ( 1 ), se nao ( 2 )\n");
        printf("R: ");
        scanf("%d", &voltar);

    } while (voltar == 1);
}