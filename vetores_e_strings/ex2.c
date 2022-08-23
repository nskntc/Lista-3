#include <stdio.h>

int main() {

    int v[1000], n;
    int i, t=0;
    int k, r=0;
    while(t<1) {
        scanf("%d", &n);
        if(n>=1 && n<=1000) {
            for(i=0; i<n; i++) scanf("%d", v+i);
            scanf("%d", &k);
            for(i=0; i<n; i++) {
                if (v[i]>=k) {
                    r++;
                }
            }
            printf("%d\n", r);
            t++;
        }   
    }


    return 0;
}