#include <stdio.h>
#include <stdlib.h>

int verification(int n, int *arr);
int size(int h);

int main(){    	
    int n;
    int to_cut = 0;
    int to_repair = 0;
    
    // obtém número total de cercas
    scanf("%d", &n);

    int arr[n];
    // obtém tamanho de cada cerca
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        switch (size(arr[i])) {
            case 1:
                to_cut++;
                break;
            case 2:
                to_repair++;
                break;
            default:
                break;
        }
    }

    if (verification(n, arr)) {
        return 1;
    }

    printf("%d %d", to_cut, to_repair);

    return 0;
}

int verification(int n, int *arr) {
    if (n < 3 || n > 1000) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 || arr[i] > 100) {
            return 1;
        }
    }
    
    return 0;
}

int size(int h) {
    if (h < 50) {
        return 1;
    }
    
    if (h < 85) {
        return 2;
    }
    
    return 0;
}