#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int tentativas = 0, ns, palpite;

    ns = rand() % 10 + 1;

    while (1) {
        printf("Digite um numero de 1 a 10\n");
        scanf("%d", &palpite);

        if (tentativas < 2) {
            if (palpite > ns) {
                printf("O numero secreto é menor que %d\n", palpite);
                tentativas++;
            } else if (palpite < ns) {
                printf("O numero secreto é maior que %d\n", palpite);
                tentativas++;
            } else {
                printf("Voce acertou!");
                break;
            }
        } else if (tentativas == 2) {
            if (palpite == ns) {
                printf("Voce acertou!");
            } else {
                printf("Voce perdeu, o numero secreto era %d", ns);
            }
            break;
        } else {
            printf("Voce perdeu, o numero secreto era %d", ns);
            break;
        }
    }
    return 0;
}
	
