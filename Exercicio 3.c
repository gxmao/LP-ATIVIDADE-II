#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

int nota = 0;

printf("Digite sua nota: ");
scanf("%i", &nota);


if (nota >= 9 )
{
    printf("Exelente!");
}
else
{
    if (nota >= 7 && nota <= 8.9)
{
    printf("Bom");
}
else
{
    if (nota >= 5 && nota <= 6.9)
    {
        printf("Razoável");
    }
    else
    {
        if ( nota < 5)
        {
             printf("Insuficiente");
        }
        else
        {
            printf("Nota digitada inválida!");
        }
        
        
    }
   }
}









return 0;
}