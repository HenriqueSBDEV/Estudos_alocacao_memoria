#include<stdio.h>
#include<stdlib.h>

int* alocaVetIntUm(int a);

int main(){
    int a = 5;
    int *vetor = alocaVetIntUm(a);
    for(int i = 0; i < a; i++){
        vetor[i] = 1;
        printf("%d ", vetor[i]);
    }
    free(vetor);
    return 0;
}

int* alocaVetIntUm(int a){
    int *vetor = (int*)malloc(a * sizeof(int));
    return vetor;
}