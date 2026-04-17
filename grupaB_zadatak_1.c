/*GRUPA B - zadatak 1*/

#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    switch(m) {
        case 1:
        case 2:
            printf("%d", n + 1);
            break;

        case 3:
            printf("%d", n * n);
            break;

        case 4:
        case 5:
            printf("%d", n);
            break;

        case 6:
            printf("%d", n);
            break;
    }

    return 0;
}


/* testiraj s primjerima iz tablice

Ulaz:
5 1

Izlaz:
6
-----------------------------

Ulaz:
5 2

Izlaz:
6
-----------------------------

Ulaz:
4 3

Izlaz:
16
-----------------------------

Ulaz:
7 4

Izlaz:
7
-----------------------------

Ulaz:
7 5

Izlaz:
7
-----------------------------

Ulaz:
7 6

Izlaz:
7
-----------------------------

*/


