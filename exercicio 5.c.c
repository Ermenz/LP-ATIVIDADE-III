
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char nome [50] [200];
    float preco [50] [50];
    int quantidade [50] [50];
    float somaprecos = 0;
    int i, j, k;
    int numero1;
    int unidade;
    float somafinal = 0;
    
   printf("MENU");
   printf("DIGITE 1 PARA ADICIONAR UMA VENDA E 2 PARA EXIBIR O TOTAL DE VENDAS\n");
   
    printf("Deseja adicionar alguma venda?\n");
    scanf("%d",&numero1);   
   
 
do {
     
        if (numero1 = 1) {
            
            
            for (i = 0; i < 1; i++) {
            printf("informe o nome do produto");
            scanf("%s", &nome[i]);

           for (j = 0; j < 1;j++) {
           printf("informe o preço do produto");
           scanf("%f", &preco[i][j]);
           somaprecos = preco[i][j];
             
            }
            
          for (k = 0; k < 1;k++) {
           printf("informe a quantidade de produto");
           scanf("%d", &quantidade[i][k]);
             unidade = quantidade [i][k];
            }
            somaprecos = somaprecos * unidade;
         }
         
         
        }  
        
          somafinal = somaprecos + somafinal;
         printf("Deseja adicionar mais algum produto?");
        scanf("%d",&numero1);   
       
        
        fflush(stdin);
     }while (numero1 != 2);

   
  printf("Valor total dos produtos %.2f", somafinal);

   
   
   
   
   
 return 0;  
}
 