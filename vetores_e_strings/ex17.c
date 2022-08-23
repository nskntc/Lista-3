#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int n;
    int i=1, c;
    double x, y, z;
    double a[3], b[3];
    scanf("%d", &n);
    for(c=0; c<3; c++) {
        scanf("%lf", &a[c]);
    }
    while(i<n) {
        for(c=0; c<3; c++) {
            scanf("%lf", &b[c]);
        }
        x=b[0]-a[0];
        y=b[1]-a[1];
        z=b[2]-a[2];
        if(x<0) x=-x;
        if(y<0) y=-y;
        if(z<0) z=-z;
        a[0]=b[0];
        a[1]=b[1];
        a[2]=b[2];
        if(x>y && x>z) {
            printf("%.2lf\n", x);
        }
        if(y>x && y>z) {
            printf("%.2lf\n", y);
        }
        if(z>x && z>y) {
            printf("%.2lf\n", z);
        }
        if(x==y && x>z) printf("%.2lf\n", x);
        if(x==z && x>y) printf("%.2lf\n", x);
        if(y==z && y>x) printf("%.2lf\n", y);
        i++;
    }
    return 0;
}