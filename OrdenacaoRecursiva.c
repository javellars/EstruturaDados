//Ordenação recursiva

#include <stdio.h>

void print(int v[], int n){
    printf("[");
    for(int i=0; i<n; i++){
        printf("%d", v[i]);
    }
    printf("]\n");
}

void insercaoRec(int v[], int n) {
    if (n > 1) { //é 1 pq um array c apenas 1 valor não precisa ser ordenado
        insercaoRec(v, n - 1); //se auto chama e define que n é n-1
        int chave = v[n - 1]; //chave é o valor do último espaço do vetor
        int i = n - 2; //indica o valor do penúltimo espaço
        while (i >= 0 && v[i] > chave) { 
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = chave;
    }
}

int main() { 
    int n = 7; //o vetor vai ter 7 campos
    int v[] = {0, 1, 2, 4, 4, 9, 3}; //define o valor deles
    insercaoRec(v, n); //chama a função de Ordenação
    print(v, n); //printa a linha final 
    return 0;
}
