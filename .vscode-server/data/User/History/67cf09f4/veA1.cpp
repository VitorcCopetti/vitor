#include <iostream>
#include <string>

using namespace std;

#include <stdio.h>
#include <string.h>

#define DIM 30

void repete( char *rep, const char *str ) {
    while(*str) {
        if(strchr(str + 1, *str))
            if(!strchr(rep, *str))
                strncat(rep, str, 1);
        str++;
    }
}

int main(void) {
    char palavra[DIM] = "";
    char repetidos[DIM] = "";

    printf("Informe uma palavra: ");
    gets(palavra);

    repete(repetidos, palavra);

    printf("Letras repetidas: %s\n", repetidos);

    return 0;
}
