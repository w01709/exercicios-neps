#include <stdio.h>
#include <stdlib.h>
#define INPUTS 4

int verify(int n);

int main() {
    // padrão de resposta: TRUE (V)
    char response = 'V';

    // inicializa a array que conterá os inputs
    int *arr = (int*) malloc(INPUTS * sizeof(int));
    
    // obtém os inputs em série
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

    // verifica as condições do enunciado
    // se erro, apenas retorna 1 na execução
    for (int i = 0; i < INPUTS; i++) {
        if (verify(arr[i])) {
            return 1;
        }
    }

    // condição básica: se o primeiro input for igual ao último,
    // a coral é falsa
    if(arr[0] == arr[3]) {
        response = 'F';
    }

    // printa a resposta obtida
    printf("%c\n", response);

    free(arr);
    return 0;
}

int verify(int n) {
    return
        n < 1 || n > 9;
}