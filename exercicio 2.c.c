
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main () {

char nomes[5] [200];
int idade[5] [5];
float notas[5] [5];
float somadasNotas = 0;
float media[5];
int j;
int k;
int i;


for ( i = 0; i < 5; i++)
{
    printf("Digite o nome da %dº pessoa", i + 1);
    scanf("%s", &nomes[i]);

   for ( j = 0; j < 1; j++)
   {
    printf("Digite a idade da pessoa");
    scanf("%d", &idade[i][j]);
   }
   
   for ( k = 0; k < 3; k++)
   {
     printf("Digite a nota da pessoa");
    scanf("%f", &notas[i][k]);  
    somadasNotas = somadasNotas + notas[i][k];
    

   }
  media[i] = somadasNotas / k;
  somadasNotas = 0;
  fflush(stdin);
     }

       for (i = 0; i < 5; i++) {
		printf("\nNome: %s \n", nomes[i]);
		
		for(k = 0; k < 3; k++) {
			printf("Notas: %.1f \n", notas[i][k]);
		}

        for ( j = 0; j < 1; j++)
        {
             printf("idade: %d \n", idade[i][j]);
        }
        
		
		printf("\nMédia: %.1f \n", media[i]);
		
		if(media[i] >= 7 ) {
			printf("Aluno aprovado! \n");
		} else if(media[i] >= 5 ) {
			printf("Aluno em recuperação! \n");
		} else {
			printf("Aluno reprovado! \n");
		}
	}	

     return 0;
}