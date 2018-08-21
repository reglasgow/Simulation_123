#include <stdlib.h>
#include <time.h>
#define MAX 40

void playcard(int *, int *);

main() {
	int CARDS[MAX], SEEDS[MAX], cards1[MAX], cards2[MAX];
    int seed;
	int i, y, z, x, X, e;                     /*z tiene conto del numero di carte sul Tavolo*/
    int count=1, POINTS, TABLE[MAX], WINNER;    /*count tiene il segno dell'ultimo giocatore che ha giocato*/

    seed = time(0);
    srand(seed);

    for (i=0; i<MAX; i++) {
        x = (double) rand()/RAND_MAX * 4;
        X = (double) rand()/RAND_MAX * 10;
        e = 1;
        for (y=0; y<MAX; y++) {
            if (CARDS[y] == X && SEEDS[y] == x) {
                e = 0;
				i--;
            }
        }
        if (e) {
            CARDS[i] = X;
            SEEDS[i] = x;
            if (i < 20) {
                cards1[i] = CARDS[i];
            } else {
                cards2[i-20] = CARDS[i];
            }
        }
    }

    while (count) {
        if (count==1) {
            playcard(cards1, TABLE);
            z++;
            count = 2;
        } else if (count==2) {
            playcard(cards2, TABLE);
            z++;
            count = 1;
        }
        if (control(TABLE[z])) {
            extract(control(TABLE[z], cards1, TABLE))
        }
    }
}

void extract(int n, int cards[], int TABLE[]) {
    int i;
    for (i=0; i<n; i++) {
        if (cards[i] != 1 && cards[i] != 2 && cards[i] != 3) {TABLE}
    }
}

int control(int TABLE) {
    if (TABLE > 3 || TABLE = 0) return 0;
    else if (TABLE == 1) return 1;
    else if (TABLE == 2) return 2;
    else if (TABLE == 3) return 3;
}

void playcard(int cards[], int TABLE[]) {
    int i, y;
    for (i=0; i<MAX; i++) {
        if (!TABLE[i]) {
            TABLE[i] = cards[0];
            for (y=0; y<MAX; y++) cards[y] = cards[y+1];
            break;
        }
    }
}