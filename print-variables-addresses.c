#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num = 42;
    char c = 'R';
    char t = 'V';

    printf("Valor de num: %d \n", num);
    printf("Endereço de num: %p \n\n", (void *)&num);
    
    printf("Valor de c: %c \n", c);
    printf("Endereço de c: %p \n\n", (void *)&c);
    
    printf("Valor de t: %c \n", t);
    printf("Endereço de t: %p \n\n", (void *)&t);

    return(0);
}
