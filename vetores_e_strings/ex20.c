#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n=1, d;
    int i, k, t, c, e;
    while(n!=0) {
        scanf("%d %d%*c", &n, &d);
        if(n==0 && d==0) return 0;
        char l[n], m[d];
        int dig;
        int maior=0;
        for(i=0; i<n; i++) {
            scanf("%c", &l[i]);
        }
        i=0;
        while(i<d) {
            for (k=1; k<=(d); k++) {
                m[0]=l[i];
                t=0;
                for(e=0; e<((n-k)+d); e++) {
                    c=0;
                    while((1+c)<d){
                        m[1+c]=l[k+t];
                        t++;
                        c++;
                    }
                    sscanf(m, "%d", &dig);
                    if(dig>maior) maior=dig;
                    t=t-(d-2);
                    if(i==d) break;
                }
                if(i==d) break;
                i++;
            }
        }
        printf("%d\n", maior);
        maior=0;
        dig=0;
        for(i=0; i<d; i++) {
            m[i]=0;
        }
    }
    return 0;
}