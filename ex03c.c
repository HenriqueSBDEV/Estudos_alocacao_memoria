#include <stdio.h>
#include <stdlib.h>

char* alocaStrCheia(int a, char ch);

int main(){
    int a = 5;
    char ch = 'a';
    char *vet = alocaStrCheia(a,ch);
    for(int i = 0; i < a; i++){
        printf("%c ", vet[i]);
    }
    free(vet);
    return 0;
}

char* alocaStrCheia(int a, char ch){
    char *vet = (char*)malloc(a * sizeof(char));
    for(int i = 0; i < a; i++){
        vet[i] = ch;
    }
    return vet;
}