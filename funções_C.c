#include <stdio.h>
#include <string.h>

int main()
{
    char opcao;
    int finaliza;
    
    printf("escolha entre opção c, l, e, d ou e\n");
    
    do
    {
        scanf(" %c", &opcao);
            
        switch(opcao){
            case 'c':
                finaliza = 1;
                printf("opção: %c\n", opcao);
                break;
            case 'l':
                finaliza = 1;
                printf("opção: %c\n", opcao);
                break;
            case 'e':
                finaliza = 1;
                printf("opção: %c\n", opcao);
                break;
            case 'd':
                finaliza = 1;
                printf("opção: %c\n", opcao);
                break;
            case 'f':
                finaliza = 0;
                printf("opção: %c\n", opcao);
                break;
            default:
                printf("codigo errado, digite novamente\n");
        }
        
    }while(finaliza = 1);

    return 0;
}