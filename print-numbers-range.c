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
        
    int main(){

         int x, y;
         printf("Digite o inicio:");
         scanf("%d", &x);
          printf("Digite o fim:");
         scanf("%d", &y);
         
         num(x, y);
         system ("pause");
    }
