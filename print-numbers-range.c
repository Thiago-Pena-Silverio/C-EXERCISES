#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void num(int a, int b){
        setlocale(LC_ALL,"Portuguese");
             
        int cont;
        for(cont = a; cont <= b; cont++){
                 printf("%d \n", cont);
        }
    }    
        
    int main(void){

         int x, y;
         printf("Digite o inicio:");
         if (scanf("%d", &x) != 1) return 1;
          printf("Digite o fim:");
         if (scanf("%d", &y) != 1) return 1;
         
         num(x, y);

    }
