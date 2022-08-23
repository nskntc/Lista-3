#include <stdio.h>
#define N 10

int main() {

    int i, soma=0;
    int idade[N];
    double m;
    for(i=0; i<N; i++) scanf("%d", &idade[i]);
    for(i=0; i<N; i++) soma=soma+idade[i];
    m=soma/(double)N;
    for(i=0; i<N; i++) {
        if(idade[i]>m) printf("%d ", idade[i]);
    }

    return 0;
}