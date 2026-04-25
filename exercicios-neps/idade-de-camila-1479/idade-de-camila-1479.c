#include <stdio.h>
#include <stdlib.h>

#define INPUTS 3

int verify(int *a);

int main(){    	
    int a[INPUTS], temp;

    for (int i = 0; i < INPUTS; i++) {
        scanf("%d", &a[i]);
    }

    if (verify(a)) {
        return 1;
    }

    for (int i = 0; i < INPUTS - 1; i++) {
        for (int j = 0; j < INPUTS - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("%d", a[1]);

    return 0;
}

int verify(int *a) {
    return
        a[0] < 5 || a[0] > 100 ||
        a[1] < 5 || a[1] > 100 ||
        a[2] < 5 || a[2] > 100;
}