/*GRUPA A - zadatak 4*/

#include <stdio.h>

int main() {
    int broj, a, b, c, suma;

    for(broj = 100; broj <= 999; broj++) {
        a = broj / 100;
        b = (broj / 10) % 10;
        c = broj % 10;

        suma = a*a*a + b*b*b + c*c*c;

        if(broj == suma) {
            printf("%d\n", broj);
        }
    }

    return 0;
}



