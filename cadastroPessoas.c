
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
 - Adição --REVISANDO 
 - Edição
 - Leitura 
 - Exclusão de cadastros 
 - base de dados, onde os cadastros poderam ser criados, com id único

*/

void menu(void)
{
    printf("              Cadastro Pessoas             \n");
    printf("------------------------------------------ \n");
    printf("---- Choose between the options below ---- \n");
    printf("- Create:[1] Read:[2] Edit:[3] Delete:[4] -\n");
    printf("         to close the program:[5]          \n");
}

//função para adicionar novo cadastro
void AdicionaCadastro(struct Pessoa *pessoa)
{
    int option;
    for(int i; i < sizeof(pessoa); i++)
    {
        printf("adicione um novo cadastro\n");
        printf("Digite o nome\n");

        fflush(stdin);
        fgets(pessoa->nome, 40, stdin);
    
        printf("Digite e-mail\n");
        scanf(" %s", &pessoa->email);

        printf("Digite cpf\n");
        scanf(" %ld", &pessoa->cpf);

        printf("confirmar dados: id[%d], nome[%s], email[%s], CPF[%li]\n", i, pessoa->nome, pessoa->email, pessoa->nome);

        printf("deseja adicionar o proximo cadastro?"); 
        scanf("%d", option);

        //maneira de continuar / encerrar a aplicação
        switch (option)
        {
        case 1:
            break;
        case 0:
            
        default:
            break;
        }
    
    }
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
    struct Pessoa pessoa;
    char acrescentar;
    int flagClose;

    setlocale(LC_ALL, "Portuguese"); 
    menu();
    //colocar a função dentro de um loop do-while
    do
    {   
        int option;
        scanf(" %d", &option);
        switch(option)
        {
            case 1:
                flagClose == RS_FALSE_;
                printf("option: %d\n", option);
                AdicionaCadastro(&pessoa);
                menu();
                break;

            case 2:
                flagClose == RS_FALSE_;
                printf("option: %d\n", option);
                EditaCadastro(&pessoa);
                menu();
                break;

            case 3:
                flagClose == RS_FALSE_;
                printf("option: %d\n", option);
                menu();
                break;

            case 4:
                flagClose == RS_FALSE_;
                printf("option: %d\n", option);
                menu();
                break;

            case 5:
                flagClose == RS_TRUE_;
                printf("option: %d\n", option);
                menu();
                break;

            default:
                flagClose == RS_FALSE_;
                printf("wrong code, type again");
                menu();
                break;
        }
               
    } while(flagClose == RS_TRUE_);

    printf("Program closed!!!");         

    return 0;
}





