#include <stdio.h>

int main() {

    int casos;
    int i;
    int t, c;
    unsigned char txt[1000], inv[1000];
    scanf("%d%*c", &casos);
    for(i=0; i<casos; i++) {
        scanf("%[^\n]%*c", txt);
        for(t=0; t<=1000; t++) {
            if(txt[t]>=65 && txt[t]<91) txt[t]+=3;
            if(txt[t]>=97 && txt[t]<123) txt[t]+=3;
            if(txt[t]=='\0') {
                break;
            }
        }
        for(c=0; c<=1000; c++) {
            inv[c]=txt[t];
            t--;
            if(t==-1) break;
        }
        for(t=0; t<=c; t++) {
            if(t>=(c/2)+1) inv[t]--;
            printf("%c", (unsigned char)inv[t]);
        }
        printf("\n");
    }
    return 0;
}