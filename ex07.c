#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

char* geraFrase(int tam);

int main(){
    int tam = 6;
    srand(time(NULL));
    char* frase = geraFrase(tam);
    printf("%s", frase);
    free(frase);
}

char* geraFrase(int tam){
    char *frase = (char*)malloc(1);
    frase[0] = '\0';
    char espaco[2] = " ";
    for(int i = 0; i < tam; i++){
        int k = 2 + rand() % 9;
        char* palavra = (char*)malloc((k + 1) * sizeof(char));
        for(int j = 0; j < k; j++){
            if(j == 0){
                palavra[j] = 'A' + rand() % 26;
            }else{
                palavra[j] = 'a' + rand() % 26;
            }
        }
        palavra[k] = '\0';
        frase = (char*)realloc(frase, strlen(palavra) + strlen(frase) + 2);
        strcat(frase, espaco);
        strcat(frase, palavra);
        free(palavra);
    }
    return frase;
}