/*GRUPA B - zadatak 4*/

#include <stdio.h>

int main() {
    int broj, a, b, obrnut;

    for(broj = 10; broj <= 99; broj++) {

        if(broj % 2 != 0) {

            a = broj / 10;
            b = broj % 10;

            obrnut = b * 10 + a;

            if(obrnut % 2 != 0) {
                printf("%d\n", broj);
            }
        }
    }

    return 0;
}

