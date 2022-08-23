#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int casos;
    int i;
    int min, max, n, c=0;
    int v[12221];
    int u, ct, m, dm, d;
    scanf("%d", &casos);
    for(i=0; i<casos; i++){
        scanf("%d %d", &min, &max);
        n=min;;
        while (n<=max) {
            while (c<((max-min)+1)) {
                v[c]=n;
                c++;
                n++;
            }
        }
        for(c=0; c<((max-min)+1); c++) {
            printf("%d", v[c]);
        }
        c--;
        while (c>=0) {
            dm=v[c]/10000;
            m=(v[c]%10000)/1000;
            ct=(v[c]%1000)/100;
            d=(v[c]%100)/10;
            u=v[c]%10;
            if(v[c]>9999) {
                printf("%d%d%d%d%d", u, d, ct, m, dm);
            }
            if(v[c]>999 && v[c]<=9999) {
                printf("%d%d%d%d", u, d, ct, m);
            }
            if(v[c]>99 && v[c]<=999) {
                printf("%d%d%d", u, d, ct);
            }
            if(v[c]>9 && v[c]<=99) {
                printf("%d%d", u, d);
            }
            if(v[c]<=9) {
                printf("%d", u);
            }
            c--;
        }
        printf("\n");
        c=0;
    }
    return 0;
}