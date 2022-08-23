#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int n; //alunos da turma
    int k, c=0; //mínimo de presenças para que a aula não seja cancelada
    int i, i2;
    int t[1000]; //tempo de chegada de cada aluno
    int nao=0;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++) {
        scanf("%d", &t[i]);
        if(t[i]<=0) c++;
    }
    if(c>=k) {
        printf("NAO\n");
        nao++;
    }
    if(c<k) printf("SIM\n");
    i--;
    if(nao>0) {
        while(i>=0) {
            i2=i+1;
            if(t[i]<=0) printf("%d\n", i2);
            i--;
        }
    }

    return 0;
}