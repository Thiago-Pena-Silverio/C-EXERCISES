#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num = 42;
    char c = 'R';
    char t = 'V';

    printf("Valor de num: %d \n", num);
    printf("Endereço de num: %d \n\n", &num);
    
    printf("Valor de c: %d \n", c);
    printf("Endereço de c: %d \n\n", &c);
    
    printf("Valor de t: %d \n", t);
    printf("Endereço de t: %d \n\n", &t);
    
    system("pause");
    return(0);
}
