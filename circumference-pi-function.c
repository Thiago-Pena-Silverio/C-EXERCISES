#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    float pi(){
        setlocale(LC_ALL,"Portuguese");
        
        printf("Retorna o valor de pi: \n");
        return 3.14;    
    }
    
    main(){
         float raio, circ;
               raio = 1.0;
               circ = 2 * pi() * raio;
               
               printf("%f \n", circ);
               
    system("pause");          
    }           
    
