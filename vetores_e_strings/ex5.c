#include <stdio.h>
#include <string.h>

int main() {

    int i, t;
    int casos;
    int l=0, v=0, c=0;
    char frase[10000];
    scanf("%d%*c", &casos);
    for(i=0; i<casos; i++) {
        scanf("%[^\n]%*c", frase);
        for(t=0; t<10000; t++) {
            if(frase[t]>=65 && frase[t]<=90) {
                l++;
                if(frase[t]!='A' && frase[t]!='E' && frase[t]!='I' && frase[t]!='O' && frase[t]!='U') c++;
            }
            if(frase[t]>=97 && frase[t]<=122) {
                l++;
                if(frase[t]!='a' && frase[t]!='e' && frase[t]!='i' && frase[t]!='o' && frase[t]!='u') c++;
            }
            if(frase[t]=='A' || frase[t]=='E' || frase[t]=='I' || frase[t]=='O' || frase[t]=='U') v++;
            if(frase[t]=='a' || frase[t]=='e' || frase[t]=='i' || frase[t]=='o' || frase[t]=='u') v++;
            if(frase[t]=='\0') break;
        }
        printf("Letras = %d\n", l);
        printf("Vogais = %d\n", v);
        printf("Consoantes = %d\n", c);
        l=0;
        v=0;
        c=0;
    }
    
    return 0;
}