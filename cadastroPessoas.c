
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

#define RS_TRUE_ 1;
#define RS_FALSE_ 0;

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
//função para Eeditar um cadastro existente
void EditaCadastro(struct Pessoa *pessoa)
{
    /*
    escolher a opção que deseja alterar entre:
    nome, email ou cpf
    */
    
}

int main()
{

    setlocale(LC_ALL, "Portuguese"); 

    struct Pessoa *pessoa;
    char acrescentar;
    int flagFinaliza;

    menu();
    //colocar a função dentro de um loop do-while
    printf("escolha entre opção c, l, e, d ou f\n");
    do
    {
        char opcao;
        scanf(" %c", &opcao);
        switch(opcao)
        {
            case 'c':
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                AdicionaCadastro(pessoa);
                break;
            case 'l':
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                //TODO
                break;
            case 'e':
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                //TODO
                break;
            case 'd':
                flagFinaliza = 1;
                printf("opção: %c\n", opcao);
                //TODO
                break;
            case 'f':
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





