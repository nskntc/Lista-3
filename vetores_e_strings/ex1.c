#include <stdio.h>

int main() {

    int i, k;
    int N, M, m;
    int v[100000];
    int r=0;
    scanf("%d", &N);
    for(i=0; i<N; i++) scanf("%d", &v[i]);
    scanf("%d", &M);
    for(k=0; k<M; k++) {
        scanf("%d", &m);
        for(i=0; i<N; i++) {
            if(m==v[i]) r++;
        }
        if(r>0) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
        r=0;
    }

    return 0;
}