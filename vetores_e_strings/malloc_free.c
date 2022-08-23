#include <stdio.h>
#include <stdlib.h> //malloc e free

int main() {

    int *pi=NULL;
    pi=(int *)malloc(4); //pi passa a possuir 4 bytes, sendo possivel alocar 1 int, 4 chars...
    *pi=10;
    free(pi); //libera os bytes ocupados por pi.

    int n;
    void t;
    calloc(int n, size_t t);// retorna o endereço de memoria para n*t bytes, já é preenchido com zeros
    return 0;
}