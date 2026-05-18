#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int num)
{
    if(num == 0)
        return 0;
    else
        return num + soma(num-1);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);
 
    printf("Soma: %d\n", soma(num));
        
system("pause");
}    
    
    
    
