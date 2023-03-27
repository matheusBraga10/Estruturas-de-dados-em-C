#include<stdio.h>

/*
A função de retorno coleta um dado de uma função que antecede o código e interage com o código:
tipo_de_retorno nome_da_funcao (listagem_de_parametros)
{
    instruções;
    retorno_da_funçao;
}
*/

//Protótipos das Funções
void imprime_cabecalho(void);
int multiplica(int n1, int n2);

int main(void)
{
    int v1, v2, resultado;

    imprime_cabecalho();//chamada da função

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    resultado = multiplica(v1, v2);
    printf("Resultado = %d\n", resultado);

    imprime_cabecalho();//chamada da função
    
    return 0;
}

void imprime_cabecalho(void)
{
    printf("*******************************************\n");
    printf("*              LINGUAGEM C                *\n");
    printf("*******************************************\n");
    return;
}
int multiplica(int n1, int n2)
{
    int res;
    res = n1 * n2;
    return res;
}
