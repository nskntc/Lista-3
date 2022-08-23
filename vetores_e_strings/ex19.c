#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Converte a string str para o valor inteiro correspondente.
 * 
 * @param str string contendo um número inteiro.
 * @return long int o número inteiro correspondente.
 */
long int string2int( const char *str );

int main() {

    char str[128];
    long int n;
    while( scanf("%s", str) != EOF ) {
        n=string2int(str);
        printf("%ld %ld\n", n, n*2);
    }

    return 0;
}

long int string2int( const char *str ) {
    long int n;
    sscanf(str, "%ld", &n);
    return n;
}