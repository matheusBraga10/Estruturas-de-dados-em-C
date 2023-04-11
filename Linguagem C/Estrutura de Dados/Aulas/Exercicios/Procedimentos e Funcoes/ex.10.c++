#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int contagemDigitos(int numero) 
{ 
    int contador = 0; 
  
    // Loop até que o número se torne 0 
    while (numero != 0) 
    { 
        // Remove o último dígito de numero 
        numero /= 10; 
  
        // Incrementa o contador 
        ++contador; 
    } 
  
    return contador; 
}

int main()
{
    int a;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    contagemDigitos(a);
    printf("O numero %d tem %d de digitos\n", a, contagemDigitos(a));

    return 0;
}