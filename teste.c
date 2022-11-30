#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "buscar.h"
#include "cadastrar.h"
#include "excluir.h"
#include "atualizar.h"

void menu_opcoes();
void cadastrar_cliente();
void buscar_cliente();
void excluir_cliente();
void atualizar_cliente();
void menu_modalidades();
char imprime_menus();

void menu_opcoes()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do
    {
        system("color E");
        system("cls");
        printf("===============================================================");
        printf("\n|                                                             |");
        printf("\n");
        printf("|            .....Menu Athletica System.....                  |");
        printf("\n|                                                             |");
        printf("\n");
        printf("|          Digite a opcao que deseja realizar:                |");
        printf("\n|                                                             |");
        printf("\n");
        printf("|          (1) - CADASTRAR um novo aluno(a)                   |");
        printf("\n");
        printf("|          (2) - BUSCAR um aluno(a)                           |");
        printf("\n");
        printf("|          (3) - ATUALIZAR os dados de um(a) aluno(a)         |");
        printf("\n");
        printf("|          (4) - EXCLUIR um cadastro de um(a) aluno(a)        |");
        printf("\n");
        printf("|          (0) - ENCERRAR o programa                          |");
        printf("\n|                                                             |");
        printf("\n");
        printf("===============================================================");
        printf("\n");
        printf("\n");

        printf("OPCAO: ");
        scanf("%d", &opcao);

        getchar();

        switch (opcao)
        {
        case 1:
            cadastrar_cliente();
            break;
        case 2:
            buscar_cliente();
            break;
        case 3:
            atualizar_cliente();
            break;
        case 4:
            excluir_cliente();
            break;
        }

    } while (opcao != 0);
}


int main(){

    menu_opcoes(); 

    return 0;
}
