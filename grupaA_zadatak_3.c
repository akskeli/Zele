/*GRUPA A - zadatak 3*/

#include <stdio.h>

int main() {
    int n, broj, original, obrnuti, ostatak;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &broj);

        original = broj;
        obrnuti = 0;

        while(broj != 0) {
            ostatak = broj % 10;
            obrnuti = obrnuti * 10 + ostatak;
            broj = broj / 10;
        }

        if(original == obrnuti) {
            printf("Palindrom\n");
        } else {
            printf("Nije palindrom\n");
        }
    }

    return 0;
}


/*  testiraj s primjerom
Ulaz:
5
121
123
44
567
9

Izlaz:
Palindrom
Nije palindrom
Palindrom
Nije palindrom
Palindrom
*/

