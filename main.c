#include <stdio.h>
#include <stdlib.h>

#define N 5
int main(int argc, char** argv) {
    int v[N];
    int i,j,numero;
    time_t t;
    
    srand((unsigned) time(&t));
    for (i=0; i<N; i++) {
        numero=rand() % 100;
        for (j=i; j>0 && v[j-1]>numero;j--) {
            v[j]=v[j-1];
        }
        v[j]=numero;
    }
    
    printf("L'array contiene i seguenti numeri (generati casualmente): \n");
    for (i=0;i<N;i++) {
        printf("%d\n", v[i]);
    }
    return (EXIT_SUCCESS);
}

