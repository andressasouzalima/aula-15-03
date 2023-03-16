
#include <stdio.h>

    int main()
    {
      #define TAM_MAX 10  
      int vet1[TAM_MAX];
      int Maior;
      int i;
      
      for(i=0; i<TAM_MAX; i++);
          scanf("%d", &vet1[i]);
     
     Maior = vet1[0];
     for(i=0; i < TAM_MAX; i++)
     if(vet1[i] > Maior)
     Maior = vet1[i];
     
     printf("O numero maior é %d \n",Maior);
     
     return 0;
     
 
}
