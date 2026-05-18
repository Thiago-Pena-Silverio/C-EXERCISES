#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int fat (int n)
{
    if(n == 0){
         return 1;
    }
    else{
         return n * fat (n-1);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int a;
    
    printf("Digite um  numero para fatorar: ");
    scanf("%d", &a);
    
    int num = fat(a);
        printf("O fatorial é: %d\n", num);
        
system("pause");
}    
    
    
    
