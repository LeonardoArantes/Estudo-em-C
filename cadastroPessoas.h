#define RS_TRUE_    1
#define RS_FALSE_   0

#define CREATE      'c'
#define READ        'l'
#define EDIT        'e'
#define DELETE      'd'
#define CLOSE       'f'

#define ALL         'a'
#define NAME        'n'
#define EMAIL       'e'
#define CPF         'c'

typedef struct Pessoa
{
    int         id;
    char        nome[101]; 
    char        email[101];
    long int    cpf;

} pessoa; 