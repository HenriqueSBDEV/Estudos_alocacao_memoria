#include<stdio.h>
#include<stdlib.h>

int* alocaVetIntZero(int a);

int main(){
    int a = 5;
    int *vetor = alocaVetIntZero(a);
    for(int i = 0; i < a; i++){
        printf("%d ", vetor[i]);
    }
    free(vetor);
    return 0;
}

int* alocaVetIntZero(int a){
    int* vetor = (int*)calloc(a,  sizeof(int));
    return vetor;
}