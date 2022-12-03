#include <stdio.h>
#include <stdlib.h>
#define tamanho_vetor 10

void quickSort(int *vetorNumerico, int esquerda, int direita)
{
    int i, j, x, y;

    i = esquerda;
    j = direita;
    x = vetorNumerico[(direita + esquerda) / 2];

    while (i <= j)
    {
        //procurar numero maior que o do meio
        while (vetorNumerico[i] < x && i < direita)
        {
            i++;
        }
        //procurar numero menor que o do meio
        while (vetorNumerico[j] > x && j > esquerda)
        {
            j--;
        }
        //organizar dentro do vetor
        if (i <= j)
        {
            y = vetorNumerico[i];
            vetorNumerico[i] = vetorNumerico[j];
            vetorNumerico[j] = y;
            i++;
            j--;
        }
    }
    //chamar novamente com os valores já organizados
    if (j > esquerda)
    {
        quickSort(vetorNumerico, esquerda, j);
    }
    if (i < direita)
    {
        quickSort(vetorNumerico, i, direita);
    }
}

int main()
{
    int i, vetor[tamanho_vetor];

    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }
    
    quickSort(vetor, 0, tamanho_vetor - 1);

    printf("\n\n\tNumeros organizados\n\n");
    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}
/*Na função main, criei um vetor chamado 'vetor' e a variável 'i', fiz uma estrutura de repetição
para preencher o vetor com os numeros que o usuario digitar, logo depois chamei a função de ordenação
e fiz uma estrutura para imprimir na tela os numeros do vetor.
Na função 'quickSort', passo como parametros o vetor, 0 como valor minimo(valor mais a esquerda) e 9
como valor maximo(mais a direita).
Depois de definir 'i' como 0, 'j' como 9 e 'x' como o valor do meio do vetor, entramos nas estruturas
de repetição. A primeira procura, dentro do vetor, um numero que seja maior do que o valor do meio,
isso caso o numero analisado seja menor que o no centro, enquanto a segunda procura um valor menor,
caso o numero analisado seja maior que o central.
Depois de achados os números, eles serão ordenados dentro do vetor, os menores à direita e os maiores
à esquerda, mas não organiza todos. Caso o 'i' seja menor que 9 ou 'j' seja maior que 0,
a função é chamada novamente com os valores já organizados como parâmetros, para organizar os que faltam.*/