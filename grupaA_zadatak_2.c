/*GRUPA A - zadatak 2*/

#include <stdio.h>

int main() {
    int n, m, a, b, temp, nzd, nzv;

    scanf("%d %d", &n, &m);

    // spremimo originalne vrijednosti
    a = n;
    b = m;

    // Euklidov algoritam za NZD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    nzd = a;

    // izraèun NZV
    nzv = (n * m) / nzd;

    printf("Najmanji zajednicki visekratnik je %d", nzv);

    return 0;
}


/*  testiraj s primjerima
Ulaz:
6 9

Izlaz:
Najmanji zajednicki visekratnik je 18
-----------------------------
Ulaz:
7 5

Izlaz:
Najmanji zajednicki visekratnik je 35
*/

