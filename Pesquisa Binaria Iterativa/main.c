#include <stdio.h>
#include <stdlib.h>
#define tamanho_vetor 10

//Metodo implementado: Pesquisa binaria

int pesquisaBinaria(int vetor[tamanho_vetor], int item)
{
    int comeco = 0;
    int fim = tamanho_vetor - 1;

    while (comeco <= fim)
    {
        //definir o valor do meio
        int i = (comeco + fim) / 2;

        //caso o valor do meio seja o que procura, encerrar
        if (vetor[i] == item)
        {
            return i;
        }
        
        //caso o do meio seja menor que o que procura, está a direita
        if (vetor[i] < item)
        {
            comeco = i + 1;
        } else //caso seja maior, está à esquerda
        {
            fim = i;
        }
    }

    return -1;
} 

int main()
{
    int item, c;
    int numero[tamanho_vetor] = {3, 8, 12, 23, 34, 55, 61, 79, 83, 100};
    for (c = 0; c < tamanho_vetor; c++)
    {
        item = numero[c];

        printf("Pesquisa do numero %d: \tposicao %d\n", item, pesquisaBinaria(numero, item));
    }
    
}

/*Na função main, eu crio as variaveis 'item', 'c', e o vetor 'numero'.
Dentro da estrutura de repetição, eu dou como valor ao 'item' um numero dentro do vetor, e, a cada
repetição da estrutura o valor de c aumenta, alterando o numero da variavel 'item'.
Na função 'pesquisaBinaria', eu passo como parametros o vetor e o item a ser procurado.
Dentro da função, defino os valores de 'começo' como 0 e 'fim' como 10.
Na estrutura de repetiçao dentro da função, defino como condição de parada quando a
variavel 'começo' se iguala ao 'fim' e dentro da variavel 'i', defino o meio do vetor.
Caso o numero na posição do meio do vetor seja igual ao 'item', é retornado 'i' como a posição.
Caso seja menor, significa que o item está à direita, então é definido como 'começo' uma posição
a mais do meio, e isso é repetido até que a posição do item desejado seja encontrada.
Caso seja menor, significa que o item está à esquesda, então o 'fim' é definido como o meio do vetor
e a estrutura se repete até achar a posição do numero desejado.*/