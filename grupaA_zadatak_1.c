/*GRUPA A - zadatak 1*/

#include <stdio.h>

int main() {
    int n;
    char znak;

    scanf("%d", &n);
    scanf(" %c", &znak);  // razmak prije %c je bitan

    switch(znak) {
        case 'z':
            printf("%d", n + n);
            break;

        case 'm':
        case 'M':
            printf("%d", n * n);
            break;

        case 'k':
            printf("%d", n);
            break;

        case 'D':
        case 'd':
            printf("%d", n);
            break;

        default:
            printf("Nepoznat znak");
    }

    return 0;
}

/*  testiraj s primjerima iz tablice
Ulaz:
5
z

Izlaz:
10
-----------------------------
Ulaz:
4
m

Izlaz:
16
-----------------------------

Ulaz:
3
M

Izlaz:
9
----------------------------

Ulaz:
7
k

Izlaz:
7

*/

