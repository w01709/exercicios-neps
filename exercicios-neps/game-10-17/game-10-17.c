#include <stdio.h>
#include <stdlib.h>

static int invalid_parameters(int positions, int disk, int plane);

int main(){    	
    //  n          d     a
    int positions, disk, plane, arr[2];

    scanf("%d", &positions);
    scanf("%d", &disk);
    scanf("%d", &plane);

    if (invalid_parameters(positions, disk, plane)){
        return 1;
    }

    arr[0] = disk - plane;
    arr[1] = disk + (positions - plane);

    if (arr[0] < 0) {
        arr[0] = arr[1];
    }

    int result = arr[0];
    if (result > arr[1]) {
        result = arr[1];
    }
        
    printf("%d", result);
    
    return 0;
}

static int invalid_parameters(int positions, int disk, int plane) {
    return positions < 3 || positions > 100 ||
           disk < 1 || disk > positions ||
           plane < 1 || plane > positions;
}