#include<stdio.h>
int main(void)
{
    char nome[11];//variável capaz de armazenar até 10 caracteres úteis
    //entre colchetes o numero de caracteres desejados + 1
    //string é uma variável que armazena uma cadeia de caracteres

    printf("Digite seu nome: ");
    
    //scanf("%s", nome);//%s para string (sequencia de caracteres) %c para char (um único caractere)

    fgets(nome, 11, stdin);//Leitura da string com espaçamentos

    printf("O nome armazenado foi: %s\n", nome);
    //scanf só armazena até o primeiro caractere de espaço do programa, ou seja, não aceita nomes compostos ou frases

    
return 0;
}