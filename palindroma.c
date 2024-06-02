#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 30

char parola[MAX+1];
char parolaInversa[MAX+1];
int i, y, z;

int main (void){
    printf("Inserisci parola");
    scanf("%s", parola);

    i=0;
    do{
        if (isalpha(parola[i])!=0){
            if((parola[i]>=65) && (parola[i]<=90)){
                parola[i]=parola[i]+32;
            }
        }
        i++;
    }while(parola[i]!='\0');

    y=i-1;
    for (z=0; z<i; z++)
    {
        parolaInversa[y]=parola[z];
        y--;
    }

    if( strcmp(parola, parolaInversa)==0){
        printf("La parola %s è palindroma", parola);
    } else {
        printf("La parola %s non è palindroma", parola);
    }

    return 0;
}