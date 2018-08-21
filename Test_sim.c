#include <stdlib.h>
int cane(int *);

main() {
    int x[2];
    x[0] = 1;
    x[1] = 2;
    if (cane(x)) {
        printf("%d %d", x[1], x[0]);
    }
    else {
        printf("%d %d ERRORE", x[1], x[0]);
    }
}
int cane(int x[]) {
    if (x[0] == 1 && x[1] == 2) {
        x[0] = 2;
        x[1] = 1;
        return 1;
    } else return 0;
}