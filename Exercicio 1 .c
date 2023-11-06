#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  
  int clima = 0;
  
  printf("informe a temperatura em graus celsius: ");
  scanf("%i", &clima);
  
  if (clima > 25)
  {
    printf("O clima esta ensolarado!");
  }
  else
  {
    if (clima < 15)
    {
      printf("O clima esta chuvoso!");
    }
    else
    {
      if (clima <= 25 && clima >= 15)
      {
        printf("O clima esta nublado!");
      }
      else
      {
        printf("Grau invalido, digite novamente!");
      }
      
    }
    
  }
  
  



    return 0;
}
