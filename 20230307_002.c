#include <stdio.h>
#include <stdlib.h>

int* EncontrarValor(int* inicio, int* fim, int valor) {
    while(inicio != fim) {
        if(*inicio == valor) {
            return inicio;
        }
        inicio++;
    }
    return NULL;
}

int main() {
    int arr[] = {1, 2, 3, 2, 5, 2, 7, 8, 9, 2};
    const int SIZE = sizeof(arr) / sizeof(arr[0]);

    int* inicio = &arr[0];
    int* fim = &arr[SIZE-1];

    int* endereco = NULL;
    while((endereco = EncontrarValor(inicio, fim, 2)) != NULL) {
        printf("Valor 2 encontrado no endereco: %p\n", endereco);
        inicio = endereco + 1; 
    }

    return 0;
}