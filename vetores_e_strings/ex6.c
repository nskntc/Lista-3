#include<stdio.h>

int main() {

    int i, t;
    int casos;
    char p[5];
    int um=0, dois=0, tres=0;
    scanf("%d", &casos);
    for(i=0; i<casos; i++) {
        scanf("%s", p);
        if(p[0]=='o') um++;
        if(p[1]=='n') um++;
        if(p[2]=='e') um++;
        if(p[0]=='t') dois++;
        if(p[1]=='w') dois++;
        if(p[2]=='o') dois++;
        if(p[0]=='t') tres++;
        if(p[1]=='h') tres++;
        if(p[2]=='r') tres++;
        if(p[3]=='e') tres++;
        if(p[4]=='e') tres++;
        if(um>1) printf("1\n");
        if(dois>1) printf("2\n");
        if(tres>3) printf("3\n");
        um=0;
        dois=0;
        tres=0;
    }

    return 0;
}