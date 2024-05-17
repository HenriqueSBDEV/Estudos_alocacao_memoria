#include <stdio.h>
#include <stdlib.h>

char* alocaStrEsp(int a);

int main(){
    int a = 5;
    char *vet = alocaStrEsp(a);
     for(int i = 0; i < a; i++){
        printf("%c", vet[i]);
    }
    free(vet);
    return 0;
}

char* alocaStrEsp(int a){
    char *vet = (char*)malloc((a + 1) * sizeof(char));
    vet[a] = '\0';
    for(int i = 0; i < a; i++){
        vet[i] = ' ';
    }
    return vet;
}