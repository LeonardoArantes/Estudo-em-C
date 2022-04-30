
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "cadastroPessoas.h"

/* 
   sistema de cadastro de pessoas

   funções à serem aplicadas: 
 - abertura, pergunta ao usuario se ele deseja cadastrar alguma pessoa --OK

 - estrutura de tipos onde as pessoas poderão ser cadastradas, nome, email, cpf --OK
 - Adição --OK 
 - Edição
 - Leitura 
 - Exclusão de cadastros 
 - base de dados, onde os cadastros poderam ser criados, com id único

*/

void menu(void)
{
    printf("             Cadastro Pessoas           \n");
    printf("----------------------------------------\n");
    printf("---- Escolha entre as opções abaixo ----\n");
    printf("Criar:[1] Ler:[2] Editar:[3] Deletar:[4]\n");
    printf("    caso queira finalizar digite:[5]    \n");
}

//função para adicionar novo cadastro
void AdicionaCadastro(struct Pessoa *pessoa)
{
    printf("adicione um novo cadastro\n");
    printf("Digite o nome\n");
    scanf(" %[^\n]", pessoa->nome);
    
    printf("Digite e-mail\n");
    scanf(" %s", pessoa->email);

    printf("Digite cpf\n");
    scanf(" %ld", &pessoa->cpf);

    printf("confirmar dados: nome[%s], email[%s], CPF[%li]", pessoa->nome, pessoa->email, pessoa->cpf);
}
//função para Editar um cadastro existente
void EditaCadastro(struct Pessoa *pessoa)
{
    char option;

    printf("Edição de cadastro:\n");
    printf("escolha uma opção:\n");
    printf("todas - 1: \n");
    printf("nome - 2: \n");
    printf("email - 3: \n");
    printf("cpf - 4: \n");

    switch (option)
    {
    case ALL:
        printf("Seleção: todas as entradas\n");
        memset(&pessoa->nome, '\0', sizeof(pessoa->nome));
        memset(&pessoa->email, '\0', sizeof(pessoa->email));
        memset(&pessoa->cpf, '\0', sizeof(pessoa->cpf));
        
        printf("Digite o nome\n");
        scanf(" %[^\n]", pessoa->nome);
        
        printf("Digite e-mail\n");
        scanf(" %s", pessoa->email);

        printf("Digite cpf\n");
        scanf(" %ld", &pessoa->cpf);
        break;

    case NAME:
        printf("Seleção: Nome\n");
        memset(&pessoa->nome, '\0', sizeof(pessoa->nome));
        
        printf("Digite o nome\n");
        scanf(" %[^\n]", pessoa->nome);
        break;

    case EMAIL:
        printf("Seleção: E-mail\n");
        memset(&pessoa->email, '\0', sizeof(pessoa->email));

        printf("Digite e-mail\n");
        scanf(" %s", pessoa->email);
        break;

    case CPF:
        printf("Seleção: CPF\n");
        memset(&pessoa->cpf, '\0', sizeof(pessoa->cpf));
        
        printf("Digite cpf\n");
        scanf(" %ld", &pessoa->cpf);
        break;

    default:
        break;
    }
}

int main()
{  
    struct Pessoa *pessoa;
    char acrescentar;
    int flagFinaliza;

    setlocale(LC_ALL, "Portuguese"); 
    menu();
    //colocar a função dentro de um loop do-while
    do
    {
        int opcao;
        scanf(" %d", &opcao);
        switch(opcao)
        {
            case 1:
                flagFinaliza = RS_FALSE_;
                printf("opção: %d\n", opcao);
                AdicionaCadastro(pessoa);
                break;

            case 2:
                flagFinaliza = RS_FALSE_;
                printf("opção: %d\n", opcao);
                EditaCadastro(pessoa);
                break;

            case 3:
                flagFinaliza = RS_FALSE_;
                printf("opção: %d\n", opcao);
                //TODO
                break;

            case 4:
                flagFinaliza = RS_FALSE_;
                printf("opção: %d\n", opcao);
                //TODO
                break;

            case 5:
                flagFinaliza = RS_TRUE_;
                printf("opção: %d\n", opcao);
                break;

            default:
                flagFinaliza = RS_FALSE_;
                printf("codigo invalido, digite novamente");
                break;
        }
               
    } while(flagFinaliza = RS_TRUE_);         

    return 0;
}





