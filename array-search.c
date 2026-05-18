#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int encontra(int *vet, int tam, int valor){
    setlocale(LC_ALL, "portuguese");
             
    int i = 0;
             
             for(i = 0; i < tam; i++){
                   if(*(vet + i) == valor){
                            return i;
                   }         
             }
             return -1;
}             
 
 int main(void){
     int v[] = {9, 3, 5, 6, 7, 32, 56};
     int indice;
     
         indice = encontra (v, 7, 32);
         
         printf("Encontrando na pos: %d \n", indice);
             
    system("pause");
    return;
}
