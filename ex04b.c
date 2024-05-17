#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* concatStr(char* strIni, char* strFim);

int main(){
    char strIni[9] = "Testando";
    char strFim[] = "tes";
    char* nvstr = concatStr(strIni, strFim);
    printf("%s", nvstr);
}

char* concatStr(char* strIni, char* strFim){
    int cont = 0;
    strIni = (char*)malloc(strlen(strFim) + strlen(strIni));
    for(int i = 0; strIni[i] != '\0'; i++){
        cont++;
    }
    for(int i = 0; i <= cont; i++){
        strIni[i + cont] = strFim[i];
    }
    return strIni;
}