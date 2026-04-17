/*GRUPA B - zadatak 2*/

#include <stdio.h>

int main() {
    int n, m, a, b, temp, nzd;

    scanf("%d %d", &n, &m);

    a = n;
    b = m;

    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    nzd = a;

    printf("Najveca zajednicka mjera je %d.", nzd);

    return 0;
}


/*
Ulaz:
6 9

Izlaz:
Najveca zajednicka mjera je 3.
-----------------------------

Ulaz:
7 5

Izlaz:
Najveca zajednicka mjera je 1.
-----------------------------
*/
