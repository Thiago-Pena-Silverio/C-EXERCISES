#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    
    int num;
    int *p = NULL;
    p = &num;
    *p = 42;
    
       printf("Valor de num: %d \n", num);
       printf("Valor de *p: %d \n", *p);
       printf("Valor de num: %d \n", &num);
       printf("Valor de p: %d \n", p);
    
    system("pause");

}
