#include <stdio.h>

int verify(int n);

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (verify(a) || verify(b)) {
        return 1;
    }

    // 3 cadeiras: 1, 2, 0
    int cadeira_ana = (1 + (a - 1)) % 3; // <- cadeira final que ana irá parar
    int cadeira_bea = (1 + (b - 1)) % 3; // <- cadeira final que beatriz irá parar

    if (cadeira_bea == cadeira_ana) {
        cadeira_bea = (cadeira_bea + 1) % 3;
    }

    for (int i = 0; i < 3; i++) {
        if (i != cadeira_ana && i != cadeira_bea) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int verify(int n) {
    return
        n < 1 || n > 1000;
}