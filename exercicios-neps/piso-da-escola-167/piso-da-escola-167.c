#include <stdio.h>
#include <stdlib.h>

int main(){
    int l, c;

    scanf("%d", &l);
    scanf("%d", &c);
    
    if (l < 1 || l > 100 || c < 1 || c > 100)
    {
        return 1;
    }
    
    // media  : 2(l - 1) + 2(c - 1)
    // grande : l x c + (l - 1) x (c - 1)

    printf("%d", (l * c + ((l - 1) * (c - 1))));
    printf("%d", (2 * (l - 1) + 2 * (c - 1)));
    
    return 0;
}
