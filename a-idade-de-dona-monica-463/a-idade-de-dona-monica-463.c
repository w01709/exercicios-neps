#include <stdio.h>
#include <stdlib.h>

int main(){
    int monica, f[3];

    scanf("%d", &monica);
    scanf("%d", &f[0]);
    scanf("%d", &f[1]);

    if (
        monica  <  40      ||
        monica  >  110     ||
        f[0]    <  1       ||
        f[0]    >= monica  ||
        f[1]    <  1       ||
        f[1]    >= monica  ||
        f[1]    == f[2]
    )
    {
        return 1;
    }

    f[2] = monica - (f[0] + f[1]);
    
    int value = f[0];
    for (int j = 0; j < 3; j++)
    {
        if (f[j] > value)
        {
            value = f[j];
        }
    }
    
    printf("%d", value);

    return 0;
}