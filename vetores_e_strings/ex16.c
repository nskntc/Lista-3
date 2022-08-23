#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int n; //número de elementos que aparecem na segunda linha
    int x[500];
    int i;
    int c;
    int igual=0, unico=0;
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }
    for(c=0; c<n; c++) {
        for(i=0; i<n; i++) {
            if(x[c]==x[i]) igual++;
        }
        igual--;
    }
    unico=n-igual;
    printf("%d\n", unico);

    return 0;
}