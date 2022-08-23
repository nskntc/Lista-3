#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * @brief aloca espaço suficiente para armazenar os n primeiros caracteres de s
 * 
 * @param n primeiros caracteres de s
 * @param s string lida
 * @return * char o endereço da string criada, NULL se não conseguir alocar o espaço necessário para um prefixo
 */
char *nprimeiroschar(int n, char s[500]);

int main() {

    int linhas, i;
    int n;
    char s[500], ns[500];
    scanf("%d%*c", &linhas);
    for(i=0; i<linhas; i++) {
        scanf("%d%*c %[^\n]%*c", &n, s);
        strcpy(ns, nprimeiroschar(n, s));
        printf("%s", ns);
        printf("\n");
    }

    return 0;
}

char *nprimeiroschar(int n, char s[500]) {
    int i;
    char *ns;
    ns=malloc(sizeof(char)*500);
    for(i=0; i<n; i++){
        if(s[i]=='\0') {
            ns[i]='\0';
            break;
        }
        ns[i]=s[i];
    }
    if(i>0) return ns;
    else return NULL;
}