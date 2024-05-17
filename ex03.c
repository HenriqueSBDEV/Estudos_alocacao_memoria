#include <stdio.h>
#include <stdlib.h>

char* alocaStr(int a);

int main(){
    int a = 5;
    char *vet = alocaStr(a);
    free(vet);
    return 0;
}

char* alocaStr(int a){
    char *vet = (char*)malloc((a + 1) * sizeof(char));
    vet[a] = '\0';
    return vet;
}