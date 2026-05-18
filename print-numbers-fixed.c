#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void num(){
        setlocale(LC_ALL,"Portuguese");
        
        int cont;
        for(cont = 1; cont < 100; cont++);
                 printf("%d \n", cont);
    }    
        
    void main(){
         
         num();
         system ("pause");
    }
