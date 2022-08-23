#include<stdio.h>

int main() {

    int n=1;
    int v[10000], vmax=0;
    int t;
    int i, f=0;
    while(n>0) {
        fflush(stdin);
        scanf("%d", &n);
        if(n==0) break;
        for(t=0; t<n; t++) {
            fflush(stdin);
            scanf("%d", &v[t]);
            if(v[t]>vmax) vmax=v[t];
        }
        for(i=0; i<=vmax; i++) {
            for(t=0; t<n; t++) {
                if(v[t]<=i) f++;
            }
            printf("(%d) %d\n", i, f);
            f=0;
        }
        vmax=0;
    }

    return 0;
}