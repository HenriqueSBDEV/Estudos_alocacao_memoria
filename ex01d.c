#include <stdio.h>
#include <stdlib.h>

int* alocaVetIntCheio(int a, int val);

int main(){
    int a = 5;
    int val = 4;
    int *vetor = alocaVetIntCheio(a, val);
    for(int i = 0; i < a; i++)
        printf("%d ", vetor[i]);
    free(vetor);
    return 0;
}

int* alocaVetIntCheio(int a, int val){
    int *vetor = (int*)malloc(a * sizeof(int));
    for(int i = 0; i < a; i++){
        vetor[i] = val;
    }
    return vetor;
}