#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    float circunferencia(float raio){
        setlocale(LC_ALL,"Portuguese");
        
        return 2 * 3.14 * raio;
    }
    main(){
         float circ;
         circ = circunferencia(1.0);
         printf("A circunferencia vale: %.2f \n", circ);
    
    system("pause");
    return 0;
    }
    
