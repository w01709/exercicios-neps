#include <stdio.h>
#include <string.h>

int returnDigit(int n);

int main() {
    int number;
    int count = 0;
    scanf("%d", &number);

    while (number != 0) {
        number = number - returnDigit(number);
        count++;
    }
    
    printf("%d\n", count);

    return 0;
}

int returnDigit(int n) {
    int bigger = 0;
    int d = 0;
    while (n > 0) {
        d = n % 10;
        if (d > bigger) {
            bigger = d;
        }
        n = n / 10;
    }
    return bigger;
}