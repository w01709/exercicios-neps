#include <stdio.h>
#include <stdlib.h>

#define INPUTS 3

int sort(int *a, int size);

int main(){    	
    int saldo, a[INPUTS];

    // pega valor do saldo
    scanf("%d", &saldo);

    // pega valores das INPUTS contas
    for (int i = 0; i < INPUTS; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, INPUTS);

    int contas = 0;
    for (int i = 0; i < INPUTS; i++) {
        if (saldo - a[i] < 0) {
            break;
        }
        saldo -= a[i];
        contas++;
    }
    
    printf("%d", contas);

    return 0;
}

int sort(int *a, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}