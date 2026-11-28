#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    float circunferencia(float raio){
        setlocale(LC_ALL,"Portuguese");
        
        return 2 * 3.14 * raio;
    }
    int main(void){
         float circ;
         circ = circunferencia(1.0);
         printf("A circunferencia vale: %.2f \n", circ);

    return 0;
    }
