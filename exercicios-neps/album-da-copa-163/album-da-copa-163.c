#include <stdio.h>
#include <stdlib.h>

int main() {
    int figurinhas_totais, figurinhas_compradas, *figurinhas;

    scanf("%d", &figurinhas_totais);
    scanf("%d", &figurinhas_compradas);

    figurinhas = (int*) malloc(figurinhas_compradas * sizeof(int));

    int answer = 0;
    int count;
    for (int i = 0; i < figurinhas_compradas; i++) {
        count = 0;

        scanf("%d", &figurinhas[i]);
        
        for (int j = 0; j < i; j++) {
            if (figurinhas[j] == figurinhas[i]) {
                count++;
                break;
            }
        }

        if (count == 0) {
            answer++;
        }
    }

    if (answer > figurinhas_totais) {
        answer = figurinhas_totais;
    }

    printf("%d\n", figurinhas_totais - answer);

    free(figurinhas);
    return 0;
}