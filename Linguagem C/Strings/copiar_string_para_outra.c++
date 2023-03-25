#include<stdio.h>
#include<string.h>
    int main(void)
{
    char nome1[15], nome2[15];

    printf("Digite seu nome:");
    scanf("%s", nome1);

    printf("Digite o nome que deseja trocar:");
    scanf("%s", nome2);
    
    printf("Nome: %s\n", nome1);
    //Para copiar string para outra:
    //strcpy(string_destido, string_origem);
    strcpy(nome1, nome2);
    printf("Nome: %s\n", nome1);
    strncpy(nome2, nome1, 1);
    printf("Nome: %s\n", nome2);

    return 0;
}