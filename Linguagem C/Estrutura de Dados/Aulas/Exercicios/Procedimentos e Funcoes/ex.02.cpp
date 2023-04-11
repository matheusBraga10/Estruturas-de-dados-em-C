/*ex.02*/
#include <stdio.h>
#include <string.h>
void imprimeTexto_contrario(char *str)
{
    int n = strlen(str);
    
    for (int i = 0; i < n/2; i++)
    {
        char texto = str[i];
        str[i] = str[n - i - 1];
        str[ n - i - 1] = texto;
    }
}

int main()
{
    char b[ ] = "Matheus Felipe Braga";
    
    imprimeTexto_contrario(b);
    printf("%s\n", b);


    return 0;
}
