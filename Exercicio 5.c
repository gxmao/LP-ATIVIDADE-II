#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

int opcao = 0;

printf("---------------------------------\n");

printf("escolha o idioma desejado abaixo:\n 1 - Ingl�s \n 2 - Espanhol \n 3 - Franc�s \n R: ");
scanf("%i", &opcao);

system("cls || clean");

if (opcao == 1)
{
   printf("welcome!");
}
else
{
    if (opcao == 2)
    {
        printf("�sea bienvenido!");
    }
    else
    {
       if (opcao == 3)
       {
        printf("accueillir!");
       }
       else
       {
       printf("A op��o digitada � inv�lida");
       }
       
    }
    
}







return 0;
}