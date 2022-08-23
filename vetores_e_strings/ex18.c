#include <stdio.h>

int main() {

    int c, i=0, k=0;
    char str[51];
    while(scanf("%[^\n]%*c", str) != EOF) {
        for(c=0; c<51; c++) {
            if(str[c]<91 && str[c]>64) str[c]+=32;
            if(str[c]=='\0') break;
        }
        while(i<c) {
            if(k%2==0 && str[i]!=32) str[i]=str[i]-32;
            if(str[i]!=32) {
                k++;
            }
            i++;
        }
        for(i=0; i<c; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
        i=0;
        k=0;
    }
    return 0;
}