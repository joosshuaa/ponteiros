#include <stdio.h>
#include <stdlib.h>

void imprimir_vetor(float *inicio, float *fim) {
    while (inicio <= fim) {
        printf("%.2f ", *inicio);
        inicio++;
    }
    printf("\n");
}

int main() {
    float vetor1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float vetor2[3] = {10.1, 20.2, 30.3};
    float vetor3[4] = {-1.1, -2.2, -3.3, -4.4};

    printf("Vetor 1, primeira metade: ");
    imprimir_vetor(&vetor1[0], &vetor1[2]);

    printf("Vetor 1, segunda metade: ");
    imprimir_vetor(&vetor1[3], &vetor1[4]);

    printf("Vetor 2, primeira metade: ");
    imprimir_vetor(&vetor2[0], &vetor2[1]);

    printf("Vetor 2, segunda metade: ");
    imprimir_vetor(&vetor2[2], &vetor2[2]);

    printf("Vetor 3, primeira metade: ");
    imprimir_vetor(&vetor3[0], &vetor3[1]);

    printf("Vetor 3, segunda metade: ");
    imprimir_vetor(&vetor3[2], &vetor3[3]);

    return 0;
}