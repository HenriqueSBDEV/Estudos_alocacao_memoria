#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* geraPalavra(int tam);

int main(){
    int tam = 6;
    char* palavra = geraPalavra(tam);
    printf("%s", palavra);
}

char* geraPalavra(int tam){
    if(tam < 2)
        return NULL;
    char *vogais = "aeiou";
    char *consoantes = "bcdfghjklmnpqrstvwxyz";
    char* palavra = (char*)calloc(tam + 1 , sizeof(char));
    if(palavra == NULL){
        printf("Erro!");
        return NULL;
    }
    for(int i = 0; i < tam; i++){
        if(i % 2 == 0){
            //consoantes
            palavra[i] = consoantes[rand() % 21];
        }else{
            //vogais
            palavra[i] = vogais[rand() % 5];
        }
    }
    return palavra;
}
