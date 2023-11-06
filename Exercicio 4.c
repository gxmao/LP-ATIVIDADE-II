#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");


int idade = 0;

printf("Digite sua idade: ");
scanf("%i", &idade);

system("cls || clean");

if (idade >=18)
{
    printf("Acesso permitido");
}
else
{
    printf("Acesso negado");
}














return 0;
}