#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int num)
{
   int i;
   int soma = 0;
   for(i=0;i<=num; i++){
                   soma =soma + i;
                   }
                   return soma;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &num) != 1 || num < 0) return 1;
 
    printf("Soma: %d\n", soma(num));

}
