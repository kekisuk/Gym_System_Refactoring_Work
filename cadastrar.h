#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct dados
{
    char cpf[15];
    char nome[100];
    char idade[5];
    char endereco[300];
    char telefone_celular[20];
    char modalidade_treino[100];
} dados_clientes;

void menu_modalidades()
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

void cadastrar_cliente()
{
    system("color B");
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    char nome[11];

    dados_clientes salvar;

    FILE *arquivo;

    char op_menu[13];

    imprime_menus("CADASTRAR");

    printf("Digite o numero do CPF do(a) aluno(a): ");
    scanf("%s", &nome);

    fflush(stdin);

    printf("Digite o nome do(a) aluno(a): ");
    fgets(salvar.nome, 100, stdin);

    printf("Digite a idade do(a) aluno(a): ");
    fgets(salvar.idade, 10, stdin);

    printf("Digite o endereC'o do(a) aluno(a): ");
    fgets(salvar.endereco, 300, stdin);

    menu_modalidades();

    printf("Digite a modalidade que deseja se matricular: ");
    fgets(salvar.modalidade_treino, 100, stdin);

    printf("Digite o numero/telefone do(a) aluno(a): ");
    fgets(salvar.telefone_celular, 20, stdin);

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
    imprime_menus("DADOS CADASTRADOS!");
    system("pause");
}
