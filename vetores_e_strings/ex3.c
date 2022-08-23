#include <stdio.h>

int main() {

    int v[4999];
    int n;
    int i;
    scanf("%d", &n);
    if(n<5000) {
        for(i=0; i<n; i++) {
            scanf("%d", v+i);
        }
        i--;
        while(i>=0) {
            printf("%d ", v[i]);
            i--;
        }
    }

    return 0;
}