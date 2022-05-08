#define RS_TRUE_    1
#define RS_FALSE_   0

#define CREATE      1
#define EDIT        2
#define READ        3
#define DELETE      4
#define CLOSE       5

#define ALL         1
#define NAME        2
#define EMAIL       3
#define CPF         4


struct Date
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    char        nome[101]; 
    char        email[101];
    long int    cpf;
}; 


struct tp_cadastro
{
    struct Pessoa pessoa;   
    struct Date date;

}cadastro[10];
