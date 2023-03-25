#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    char str[11] = "Curso";

    //Exemplo strcat - concatenar strings (junta o conteúdo de uma string ao conteúdo de outra)
    strcat(str," de C");
    //Concatenando a string "de C" com o conteúdo da string str

    printf("Concatenando strings com strcat\n");
    printf("str = %s\n", str);
    //Sera exibido "Curso de C"
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    char str1[ ] = "Curso", str2[ ] = " de programacao em C";
    //Exemplo strncat - concatenar strings com n caracteres
    
    strncat(str1, str2, 15);
    //Concatena a str1 com 15 posições da str2
    
    printf("str1 = %s\n", str1);
    //Será exibido "Curso de programação"
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    
    return 0;
}