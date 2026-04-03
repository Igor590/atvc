#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h> // Apenas para a função tolower() 

int main() {
    setlocale(LC_ALL, "portuguese");

    char palavra[100];
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    int tamanho = strlen(palavra);
    
    for (int i = 0; i < tamanho; i++) {
        palavra[i] = tolower(palavra[i]);
    }
    for (int i = 0; i < tamanho / 2; i++) {
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
