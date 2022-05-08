
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
void AdicionaCadastro(struct tp_cadastro *cadastro)
{
    int i = 0;
    int flagContinue = RS_TRUE_;
    do
    {   
        if (flagContinue == RS_TRUE_)
        {
            printf("adicione um novo cadastro\n");
            printf("Digite o nome\n");

            fflush(stdin);
            fgets(cadastro[i].pessoa.nome, 40, stdin);
                
            printf("Digite e-mail\n");
            scanf(" %s", &cadastro[i].pessoa.email);

            printf("Digite cpf\n");
            scanf(" %ld", &cadastro[i].pessoa.cpf);

            printf("confirmar dados: id[%d], nome[%s], email[%s], CPF[%li]\n", i, cadastro[i].pessoa.nome, cadastro[i].pessoa.email, cadastro[i].pessoa.nome);

            printf("Add next \n"); 
            printf("type 1 to continue, type 0 to close\n");
            scanf("%d", flagContinue);
            //maneira de continuar / encerrar a aplicação
            
            if(flagContinue == RS_TRUE_)
            {
                i++;
            }
        }
    }
    while(flagContinue == RS_FALSE_);
}

//função para Editar um cadastro existente
void EditaCadastro(struct tp_cadastro * cadastro)
{
    char option;
    int index;

    printf("Edição de cadastro:\n");
    printf("escolha uma opção:\n");
    printf("todas - 1: \n");
    printf("nome - 2: \n");
    printf("email - 3: \n");
    printf("cpf - 4: \n");

    switch (option)
    {
        case ALL:
            printf("select the index");
            for(index = 0; index < 10; index++)
            {
                if(strlen(cadastro[index].pessoa.nome) > 0){
                    printf("%s\n", cadastro[index].pessoa.nome);
                }
            }
            //scanf(""); escanear o idex que será alterado
            printf("Seleção: todas as entradas\n");
            memset(&cadastro[index].pessoa.nome, '\0', sizeof(cadastro[index].pessoa.nome));
            memset(&cadastro[index].pessoa.email, '\0', sizeof(cadastro[index].pessoa.email));
            memset(&cadastro[index].pessoa.cpf, '\0', sizeof(cadastro[index].pessoa.cpf));
            
            printf("Digite o nome\n");
            scanf(" %[^\n]", &cadastro[index].pessoa.nome);
            
            printf("Digite e-mail\n");
            scanf(" %s", &cadastro[index].pessoa.email);

            printf("Digite cpf\n");
            scanf(" %ld", &cadastro[index].pessoa.cpf);
            break;

        case NAME:
            printf("Seleção: Nome\n");
            memset(&cadastro[index].pessoa.nome, '\0', sizeof(&cadastro[index].pessoa.nome));
            
            printf("Digite o nome\n");
            //trocar para fgets
            scanf(" %[^\n]", &cadastro[index].pessoa.nome);
            break;

        case EMAIL:
            printf("Seleção: E-mail\n");
            memset(&cadastro[index].pessoa.email, '\0', sizeof(&cadastro[index].pessoa.email));

            printf("Digite e-mail\n");
            scanf(" %s", &cadastro[index].pessoa.email);
            break;

        case CPF:
            printf("Seleção: CPF\n");
            memset(&cadastro[index].pessoa.cpf, '\0', sizeof(&cadastro[index].pessoa.cpf));
            
            printf("Digite cpf\n");
            scanf(" %ld", &cadastro[index].pessoa.cpf);
            break;

        default:
            break;
    }
}

/*
função para pesquisa entre os valores atribuidos para as pessoas
deve retornar uma lista de nomes e a posição na struct[i]
a partir de comando, deve retornar todas as outras informações de cadastro, como emial, cpf 

void Select(struct Cadastro cadastro)
{

}
*/
int main()
{  
    struct tp_cadastro *cadastro;
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
                AdicionaCadastro(cadastro);
                menu();
                break;

            case 2:
                flagClose == RS_FALSE_;
                printf("option: %d\n", option);
                EditaCadastro(cadastro);
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





