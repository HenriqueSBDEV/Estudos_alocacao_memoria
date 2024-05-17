#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &n);
    if (n < 100 || n > 999) {
        printf("Numero invalido!\n");
        return 1;
    }

    int centena = n / 100;
    int dezena = (n / 10) % 10;
    int unidade = n % 10;

    int somaCubos = (centena * centena * centena) + (dezena * dezena * dezena) + (unidade * unidade * unidade);

    if (n == somaCubos) {
        printf("%d eh um numero de angstron.\n", n);
    } else {
        printf("%d nao eh um numero de angstron.\n", n);
    }

    return 0;
}
