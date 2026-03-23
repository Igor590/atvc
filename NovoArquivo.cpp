#include <stdio.h>
#include <string.h>
#include <locale.h>

char palavra[100];
int i, tamanho, palindromo = 1;

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("É um Palíndromo!\n");
    } else {
        printf("Não é um Palíndromo!\n");
    }

    return 0;
}