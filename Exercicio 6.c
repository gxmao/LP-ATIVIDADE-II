#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

int opcao = 0;
int preco;

printf("--------------------------------");
printf("\nEscolha a op��o desejada abaixo:\n 1 - Camiseta \n 2 - Cal�a \n 3 - Sapato \n R:");
scanf("%i", &opcao);

system("cls || clean");

if (opcao == 1)
{
    printf("C�digo: 1");
    printf("\nProduto: Camiseta");
    printf("\nValor: R$ 50.00");
}
else
{
    if (opcao == 2)
    {
         printf("C�digo: 2");
    printf("\nProduto: Cal�a");
    printf("\nValor: R$ 35.00");
    }
    else
    {
        if (opcao == 3)
        {
             printf("C�digo: 3");
    printf("\nProduto: Sapato");
    printf("\nValor: R$ 45.00");
        }
        else
        {
            printf("A op��o digitada � inv�lida!");
        }
        
    }
    
}






















return 0;
}