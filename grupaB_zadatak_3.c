/*GRUPA B - zadatak 3*/

#include <stdio.h>

int main() {
    double a, rezultat = 1;
    int n;

    scanf("%lf %d", &a, &n);

    for(int i = 0; i < n; i++) {
        rezultat = rezultat * a;
    }

    printf("%.2f", rezultat);

    return 0;
}


/*
Ulaz:
2 5

Izlaz:
32.00
-----------------------------

Ulaz:
3 3

Izlaz:
9.00
-----------------------------

Ulaz:
5 0

Izlaz:
1.00
-----------------------------
*/
