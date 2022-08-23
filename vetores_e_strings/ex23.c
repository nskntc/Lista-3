#include <stdio.h>

int main() {

    int q1, q2;
    scanf("%d", &q1);
    scanf("%d", &q2);
    int v1[q1];
    int v2[q2];
    int v3[q1+q2];
    int i, k, c;
    for(i=0; i<q1; i++) {
        scanf("%d", &v1[i]);
    }
    for(i=0; i<q2; i++) {
        scanf("%d", &v2[i]);
    }
    if(v1[0]<=v2[0]) {
        i=0;
        k=0;
        c=0;
        while(c<(q1+q2)) {
            v3[c]=v1[i];
            i++;
            c++;
            v3[c]=v2[k];
            k++;
            c++;
        }
    }
    if(v1[0]>v2[0]) {
        i=0;
        k=0;
        c=0;
        while(c<(q1+q2)) {
            if(v2[i]<v1[k]) {
                v3[c]=v2[i];
                i++;
            }
            else {
                v3[c]=v2[i];
                k++;
            }
            c++;
            if(v1[k]<v2[i]) {
                v3[c]=v1[k];
                k++;
            }
            else {
                v3[c]=v1[k];
                i++;
            }
            c++;
        }
    }
    for(i=0; i<(q1+q2); i++) {
        printf("%d\n", v3[i]);
    }


    return 0;
}