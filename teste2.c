#include <stdio.h>

int main() {
    int n, i;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Informe um numero positivo!.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    return 0;
}
