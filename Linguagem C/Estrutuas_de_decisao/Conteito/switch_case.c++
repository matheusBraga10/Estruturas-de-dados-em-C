#include<stdio.h>
int main(void)
{
    int valor;
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);
//O SWITCH avalia os casos apontados (caso seja 1, imprimir domingo; caso seja 2 imprimir segunda...)
//Muito usado para menus, onde não se pode trabalhar com condições - NÃO trabalha com equações, somente dados fixos
/*SÓ EXECUTA OU 1 OU OUTRO. OU O CASO 1 OU OUTRO CASO SELECIONADO*/
    switch (valor)
    {
        //início do bloco do switch
        case 1:
            printf("Domingo\n");
        break;

        case 2:
            printf("Segunda\n");
        break;

        case 3:
            printf("Terça\n");
        break;

        case 4:
            printf("Quarta\n");
        break;

        case 5:
            printf("Quinta\n");
        break;

        case 6:
            printf("Sexta\n");
        break;

        case 7:
            printf("Sábado\n");
        break;

        default : //defaut é mostrado somente quando todas as alternativas anteriores forem falsas
            printf("Erro: Valor invalido! Digite somente valores de 1 a 7\n");

    }//fim do bloco switch
    return 0;
}