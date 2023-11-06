#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int opcao = 0;

printf("--------------------------");
printf("\n | DEVS GAME |\n 1 - Novo Jogo \n 2 - Carregar \n 3 - Configurações \n -------------------------- \n :");
scanf("%i", &opcao);

system("cls || clear");

switch (opcao)
{
case 1:
    printf("--------------------------");
    printf("Novo Jogo                 ");
    printf("\nNome: yekzza            ");
    printf("\nDificuldade: Normal     ");
    printf("\nLevel: 1                ");
    printf("\nMundo: 3                ");
    printf("\nProgresso: 0/100        ");
    printf("\n começando jogo...      ");

    break;
case 2:
printf("--------------------------");
printf("\nSELECIONAR:               ");
printf("\nUltimo salvamento: 04/11/23");
printf("\nNome: gxmao               ");
printf("\nIdade: 28                 ");
printf("\nLevel: 89                 ");
printf("\nMundo: 2                  ");
printf("\nProgresso: 79/100         ");
printf("\n--------------------------");
printf("\nUltimo salvamento: 17/10/23");
printf("\nNome: r0dr1gu3s            ");
printf("\nIdade: 22                 ");
printf("\nLevel: 62                 ");
printf("\nMundo: 6                  ");
printf("\nProgresso: 52/100         ");
printf("\n JOGAR                    ");
printf("\n--------------------------");

break;
case 3: 
printf("--------------------------");
printf("\n| Volume    |              ");
printf("\n| Gráficos  |              ");
printf("\n| Controles |              ");
printf("\n| Créditos  |              ");
printf("\n--------------------------");






default:
    break;
}










return 0;
}