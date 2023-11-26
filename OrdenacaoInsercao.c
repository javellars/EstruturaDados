//Ordenação com apenas o último valor fora da ordem

#include <stdio.h>

void print(int v[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) { //enquanto i for menor que o tamanho do vetor, vai printar na tela
        printf("%d ", v[i]); //printa um valor por vez
    }
    printf("]\n");
}

void OrdenacaoInsercao(int v[], int n) {
    int chave = v[n - 1]; //indica o elemento da última posição do vetor
    int i = n - 2; //indica que vai se ruma posição antes de chave
    int lixo = -1; //pode por qualuqer valor, só ta no código pra ajudar a vizualizar oq acontece
    while (i >= 0 && v[i] > chave) { //até ter 0 campos, e enquanto a posição anterior for maior que chave
        v[i + 1] = v[i]; // vai por o valor da chave na posição atual
        v[i]=lixo; //vai por a posição lixo na ex posição atual
        i--; //decrementa, pq ele roda até chegar em 0
        print(v,n); //chama a print e exibe como ta  alinha a cada rodada
    }
    v[i + 1] = chave; //substitui o valor -1(nosso lixo) pela chave 
}

int main() { 
    int n = 7; //o vetor vai ter 7 campos
    int v[] = {0, 1, 2, 4, 4, 9, 3}; //define o valor deles
    OrdenacaoInsercao(v, n); //chama a função de Ordenação
    print(v, n); //printa a linha final 
    return 0;
}
