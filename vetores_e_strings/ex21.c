#include <stdio.h>

int main() {

    int s[6];
    int d[6];
    int i, t, k; //contadores
    int apostas;
    int sena=0, quina=0, quadra=0, acertos=0;
    for(i=0; i<6; i++) {
        scanf("%d", &s[i]);
    }
    scanf("%d", &apostas);
    for(i=0; i<apostas; i++) {
        for(t=0; t<6; t++) {
            scanf("%d", &d[t]);
        }
        for(k=0; k<6; k++) {
            for(t=0; t<6; t++) {
                if(s[k]==d[t]) acertos++;
            }
        }
        if(acertos==6) sena++;
        if(acertos==5) quina++;
        if(acertos==4) quadra++;
        acertos=0;
    }
    if(sena>0) printf("Houve %d acertador(es) da sena\n", sena);
    else printf("Nao houve acertador para sena\n");
    if(quina>0) printf("Houve %d acertador(es) da quina\n", quina);
    else printf("Nao houve acertador para quina\n");
    if(quadra>0) printf("Houve %d acertador(es) da quadra\n", quadra);
    else printf("Nao houve acertador para quadra\n");

    return 0;
}