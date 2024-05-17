#include <stdio.h>
#include <stdlib.h>

int* alocaVetInt(int a);

int main(){
    int a = 3;
    int *vetor = alocaVetInt(a);
    free(vetor);
    return 0;
}

int* alocaVetInt(int a){
    int *vetor = (int*)malloc(a * sizeof(int));
    return vetor;
}