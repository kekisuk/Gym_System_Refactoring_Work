#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char imprime_menus(char texto[13])
{
    printf("===============================================================\n");
    printf("                          %s                            \n", texto);
    printf("===============================================================\n\n");
}

void buscar_cliente()
{
    system("color F");
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    char nome[15];
    int numero_palavras = 0;
    char *palavras[50];
    char linha[50];

    system("cls");

    imprime_menus("BUSCAR");

    printf("\nDigite o numero do CPF que deseja buscar: ");
    scanf("%s", &nome);

    printf("\n");

    FILE *arquivo;

    arquivo = fopen(nome, "r");

    if (arquivo == NULL)
    {
        printf("ARQUIVO INEXISTENTE!\n");
        system("pause");
    }

    else
    {
        while (fgets(linha, sizeof linha, arquivo) != NULL)
        {
            palavras[i] = strdup(linha);
            i++;
            numero_palavras++;
        }

        for (i = 0; i < numero_palavras; i++)
        {
            printf("%s", palavras[i]);
        }

        fclose(arquivo);

        printf("\n\n");
        getchar();
        system("pause");
        system("cls");
    }
}