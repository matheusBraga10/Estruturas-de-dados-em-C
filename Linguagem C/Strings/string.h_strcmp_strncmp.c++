#include<stdio.h>
#include<string.h> //Biblioteca de strings necessária para strcmp

int main(void)
{
    char str1[ ] = "abc", str2[ ] = "abd";
    int retorno;

    //strcmp compara as strings
    retorno = strcmp(str1, str2);
    /*
    = 0: conteúdo das strings é igual
    < 0: conteúdo da str1 é menor que str2
    > 0: cconteúdo da str1 é maior que str2
    */
   printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
   printf("Retorno = %d\n", retorno);
   printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
   char str3[ ] = "Curso de C", str4[ ] = "Curso de Java";
   int resultado;

   resultado = strncmp(str3, str4, 5);

   printf("Resultado = %d\n", resultado);




    return 0;
}