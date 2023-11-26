
#include <stdio.h>
#include <string.h>

int main () {
    
char contato[20] [200];
int numero [20] [20];
int numero1;
int i;
int k = 0;
int j;
int p = 0;


printf("DIGITE 1 PARA ADICIONAR ALGUM CONTATO E 2 PARA EXIBI-LOS\n");    


do {
     
        if (numero1 = 1) {
            
            k++;
            for (i = 0; i < k; i++) {
            printf("informe o nome do contato");
            scanf("%s", &contato[i]);

           for (j = 0; j < 1;j++) {
           printf("informe o número do contato");
           scanf("%d", &numero[i][j]);
            }
            
         }
         
        }  
         printf("Deseja adicionar mais algum contato?");
        scanf("%d",&numero1);   
       

        fflush(stdin);
     }while (numero1 != 2);

 
   
  
 for (i = 0; i < k; i++) {
		printf("\nNome: %s \n", contato[i]);
		
		for(j = 0; j < 1; j++) {
			printf("numero %d \n", numero[i][j]);
		}
 }

		printf("numero %d \n", k);


return 0;
}
