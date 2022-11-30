#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


typedef struct dados_clientes1{
    char cpf[15];
    char nome[100];
    char idade[5];
    char endereco[300];
    char telefone_celular[20];
    char modalidade_treino[100];
}dados_clientes1;

void menu_modalidades1()
{
    printf("\n===== 1. MUSCULACAO =====");
    printf("\n===== 2. CROSSFIT   =====");
    printf("\n===== 3. DANCA      =====");
    printf("\n===== 4. KARATE     =====");
    printf("\n===== 5. JIU JITSU  =====");
    printf("\n===== 6. NATACAO    =====");
    printf("\n===== 7. IOGA       =====");
    printf("\n===== 8. PILATES    =====");
    printf("\n===== 9. JUMP       =====");
    printf("\n==== 10. GINASTICA  =====\n\n");
}

dados_clientes1 receber_dados(char *nome)
{

    dados_clientes1 salvar;

    system("cls");

    fflush(stdin);

    printf("Digite o nome do(a) aluno(a): ");
    fgets(salvar.nome, 100, stdin);

    printf("Digite a idade do(a) aluno(a): ");
    fgets(salvar.idade, 10, stdin);

    printf("Digite o endereC'o do(a) aluno(a): ");
    fgets(salvar.endereco, 300, stdin);

    menu_modalidades1();

    printf("Digite a modalidade que deseja se matricular: ");
    fgets(salvar.modalidade_treino, 50, stdin);

    printf("Digite o numero/telefone do(a) aluno(a): ");
    fgets(salvar.telefone_celular, 20, stdin);

    return salvar;
}
void salvar_dados(dados_clientes1 salvar, char *nome)
{
    FILE *arquivo;

    arquivo = fopen(nome, "w");

    fprintf(arquivo,"===============================================================");
    fprintf(arquivo, "\n");

    fprintf(arquivo, "NOME: ");
    fputs(salvar.nome, arquivo);

    fprintf(arquivo, "IDADE: ");
    fputs(salvar.idade, arquivo);

    fprintf(arquivo, "ENDERECO: ");
    fputs(salvar.endereco, arquivo);

    fprintf(arquivo, "MODALIDADE: ");
    fputs(salvar.modalidade_treino, arquivo);

    fprintf(arquivo, "TELEFONE: ");
    fputs(salvar.telefone_celular, arquivo);

    fprintf(arquivo,"===============================================================");

    fclose(arquivo);

    fflush(stdin);
    system("cls");
    imprime_menus("DADOS ATUALIZADOS!");
    system("pause");
}

void atualizar_cliente()
{
    system("color D");
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    char nome[12];

    dados_clientes1 salvar;

    imprime_menus("ATUALIZAR");

    printf("Digite o CPF do aluno que deseja atualizar os dados: ");
    scanf("%s", &nome);

    printf("Atencao!\nPara atualizar um cadastro se faz necessario sobrescrever o arquivo original.\n");
    printf("Deseja continuar com a atualizacao?\n(1) - SIM\n(2) - NAO\n\nOPCAO: ");
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 2)
    {
        system("cls");
        
    }
    else
    {
        FILE *arquivo;
        arquivo = fopen(nome, "r+");
        if (arquivo == NULL)
        {
            printf("ARQUIVO INEXISTENTE!\n\n");
            system("pause");
        }
        else
        {
            salvar = receber_dados(nome);
            salvar_dados(salvar, nome);
        }
    }
}