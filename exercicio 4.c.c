/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <locale.h>
#include <stdio.h>
#include <string.h>


int main () {

setlocale(LC_ALL, "portuguese");

int par = 0;
int impar = 0;
int positivo = 0;
int negativo = 0;
int maior = 0;
int menor = 9999999;
float somaimpar = 0;
float somapar = 0;
float mediaquantidadetotal;
float mediapar;
int valor[5];
int i;
int quantidade = 0;
float somaquantidade = 0;

for ( i = 0; i < 5; i++)
 {
   printf("Informe  %dº valor\n", i + 1);
   scanf("%d", &valor[i]);


quantidade++;
somaquantidade+= valor[i];


if (valor[i] % 2 == 0) 
{
 par++;
 somapar+= valor[i];
} else {
	impar++;
	somaimpar+= valor[i];
}

if (valor[i] > 0) 
{
 positivo++;
} else {
	negativo++;
}

if (valor[i] > maior ) {
		maior = valor[i];
	} 
	
	if (valor[i] < menor ) {
		menor = valor[i];
	} 
	
	} 

if ( par> 0) {
	mediapar = somapar / (float) par;
}
 


 mediapar = somapar/par;

 mediaquantidadetotal =  somaquantidade/quantidade;


printf("Quantidade de impares %d \n", impar);
printf("Quantidade de negativos %d \n", negativo);
printf("O maior número é %d\n", maior);
printf("O menor número é %d\n", menor);


printf("Media de pares %.2f\n", mediapar);
printf("Media de todos os números %.2f\n", mediaquantidadetotal);

printf("\n");





 return 0;
}