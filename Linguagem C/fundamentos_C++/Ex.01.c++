#include<stdio.h> //biblioteca padrão para entrada e saída de dados
//#include<stdlib.h> necessário para system("pause)";
int main(void) //funcao principal
{//inicio do programa
    char caracteres[10];
    int i;

    printf("Exibindo os valores do vetor \n\n");//

    for(i = 0; i <= 9; i++)
    {
        printf("caracteres[%d] = %d\n", i, caracteres[i]);
    }
    //system("pause"); pausa na tela - somente necessário para windows
    return 0;//valor de retorno da funcao main - zero significa que executou com sucesso
}//fim do programa