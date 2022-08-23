#include <stdio.h>

int main(void) {

    int notas[10000], notamax=0;
    int n;
    int i, indice;
    int t;
    int vezes=0;
    scanf("%d", &n);
    if(n==0) return 0;
    for(i=0;i<n; i++) {
        scanf("%d", &notas[i]);
        if(notas[i]>=0 && notas[i]<11) {
            if(notas[i]>notamax) {
                notamax=notas[i];
                indice=i;
            }
        }
    }
    i--;
    for(t=0; t<=i; t++) {
        if(notas[t]==notas[i]) vezes++;
    }
    printf("Nota %d, %d vezes\n", notas[i], vezes);
    printf("Nota %d, indice %d\n", notamax, indice);

    return 0;
}