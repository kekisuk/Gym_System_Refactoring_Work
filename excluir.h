#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


void excluir_cliente()
{
    system("color A");
    setlocale(LC_ALL, "Portuguese");

    int retorno;

    FILE *arquivo;

    char nome[15];

    system("cls");

    imprime_menus("APAGAR");

    printf("Digite o numero do CPF que deseja excluir: ");
    scanf("%s", &nome);

    printf("Tem certeza que deseja prosseguir com a exclusao?\n(1) - SIM\n(2) - NAO\n\nOPCAO: ");
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 2)
    {
        system("cls");
        //return 0;
    }

    arquivo = fopen(nome, "r");

    fclose(arquivo);

    if (arquivo == NULL)
    {
        printf("\nARQUIVO INEXISTENTE!\n");
    }

    else
    {
        retorno = remove(nome);
        if (retorno == 0)
        {
            printf("\nEXCLUIDO COM SUCESSO!\n");
        }
        else
        {
            printf("\nERRO AO EXCLUIR!\n");
        }
    }

    printf("\n");
    getchar();
    system("pause");
    system("cls");
}