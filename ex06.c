#include<stdio.h>
#include<stdlib.h>

char* geraNome(int tam);

int main(int argc, char const *argv[]){
    int tam = 6;
    char* palavra = geraNome(tam);
    printf("%s", palavra);
    return 0;
}

char* geraNome(int tam){
    srand(time(NULL));
    char *vogais = "aeiou";
    char *consoantes = "bcdfghjklmnpqrstvwxyz";
    if(tam < 2)
        return NULL;
    char* palavra = (char*)calloc(tam + 1, sizeof(char));
    for(int i = 0; i < tam; i++){
        if(i == 0){
            palavra[i] = 'A' + rand() % 26;
        }else{
            if(i % 2 == 1){
                //vogais
                palavra[i] = vogais[rand() % 6];
            }else{
                //consoantes
                palavra[i] = consoantes[rand() % 21];
            }
        }
    }
    return palavra;
}