#include <stdio.h>

int main() {
    int d, stop_number, result;

    scanf("%d", &d);

    if (d < 6 || d > 800008) {
        return 1;
    }

    stop_number = (d - 3) % 8;

    switch (stop_number) {
        case 3:
            result = 1;
            break;
        case 4:
            result = 2;
            break;
        case 5:
            result = 3;
            break;
        default:
            break;
    }

    printf("%d\n", result);
    return 0;
}