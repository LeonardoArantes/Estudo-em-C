
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
    printf("Criar:[c] Ler:[l] Editar:[e] Deletar:[d]\n");
    printf("    caso queira finalizar digite:[f]    \n");
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

    printf("escolha uma opção:\n");
    printf("todas: \n");
    printf("nome: \n");
    printf("email: \n");
    printf("cpf: \n");

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

    setlocale(LC_ALL, "Portuguese"); 

    struct Pessoa *pessoa;
    char acrescentar;
    int flagFinaliza;

    menu();
    //colocar a função dentro de um loop do-while
    printf("escolha entre opção c, e, l, d ou f\n");
    do
    {
        char opcao;
        scanf(" %c", &opcao);
        switch(opcao)
        {
            case CREATE:
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                AdicionaCadastro(pessoa);
                break;
            case EDIT:
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                EditaCadastro(pessoa);
                break;
            case READ:
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                //TODO
                break;
            case DELETE:
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                //TODO
                break;
            case CLOSE:
                flagFinaliza = 0;
                //TODO
                printf("opção: %s\n", opcao);
                break;    
            default:
                printf("codigo invalido, digite novamente");
                break;
        }
               
    } while(flagFinaliza = 0);         

    return 0;
}





