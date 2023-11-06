#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    float valor = 0;
    int dia = 0;
    float desconto;
    float valorFinal;

    printf("\nInforme o valor total da sua compra: ");
    scanf("%f", &valor);

printf("\nSua compra foi efetuada em um final de semana?\n1 - sim\n2 - não \n R:");
scanf("%i", &dia);


if (dia == 2)
{
    desconto = 0.10 ;
}
else
{
    desconto = 0.15;
}

if (valor >= 100)
{
    valorFinal = valor - (valor * desconto);
}
else
{
    desconto = 0;
    valorFinal = valor;
}

system("cls || clean");

printf("desconto: %.2f \n", desconto);
printf("Valor final pago: %f \n", valorFinal);








return 0;
}