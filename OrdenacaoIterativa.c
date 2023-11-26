//Ordenação iterativa 

#include <stdio.h>

void print(int v[], int n){
    printf("[");
    for(int i=0; i<n ;i++){
        printf("%d", v[i]);
    }
    printf("]\n");
}

void ordInte(int v[], int n){
    int N = 2;
    while(N<=n){
        int chave = v[N-1];
        int i = N-2;
        while(i>=0 && v[i]> chave){
            v[i+1] = v[i];
            i--;
        }
    v[i+1] = chave;
    n++;
    }
}

int main(){
    int n = 7;
    int v[] = {0,1,2,4,4,9,3};
    ordInte(v,n);
    print(v,n);
return 0;
}