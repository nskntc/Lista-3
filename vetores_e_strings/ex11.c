#include <stdio.h>

int main() {

    int n;
    int i, c, k=0, t=0;
    int v[1000000], aux[1000000];
    double m;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    for(i=0; i<n; i++) {
        for(c=0; c<n; c++) {
            if(v[i]<=v[c]) k++;
            if(v[i]==v[c]) t++;
        }
        t--;
        if(t==0) aux[n-k]=v[i];
        else {
            while(t!=-1) {
                aux[(n-k)+t]=v[i];
                t--;
            }
        }
        k=0;
        t=0;
    }
    i=1;
    while(i<n) i++;
    if(i%2==0) {
        m=(double)(aux[i/2]+aux[(i/2)-1])/2;
    }
    if(i%2==1) {
        m=(double)aux[i/2];
    }
    printf("%.2lf\n", m);


    return 0;
}