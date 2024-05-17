#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* copiaStr(char* strFonte, char* strDestino);

int main(){
    int i;
    char strFonte[] = "Testando";
    char* strDestino = (char*)malloc(sizeof(char) * (strlen("Tes") + 1));
    for(i = 0; i < strlen(strDestino); i++){
        strDestino[i] = 'a' + i;
    }
    char* nvstr = copiaStr(strFonte, strDestino);
    printf("%s", nvstr);
    free(nvstr);
    return 0;
}

char* copiaStr(char* strFonte, char* strDestino){
    int i;
    int tamanhoFonte = strlen(strFonte);
    int tamanhoDestino = strlen(strDestino);
    if(tamanhoFonte >= tamanhoDestino){
    strDestino = (char*)realloc(strDestino, (tamanhoFonte + 1) * sizeof(char));
        if (strDestino == NULL) {
            printf("Erro ao realocar memoria\n");
        }
    }
    for(i = 0; strFonte[i] != '\0'; i++){
        strDestino[i] = strFonte[i];
    }
    return strDestino;
}