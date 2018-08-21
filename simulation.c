#include <stdlib.h>
#include <time.h>
#define MAX 40

main() {
	int CARDS[MAX], SEEDS[MAX], cards1[MAX/2], seeds1[MAX/2], cards2[MAX/2], seeds2[MAX/2];
    int seed;
	int i, y, x, X, e, END=1;
    int COUNT, TABLEC[MAX], TABLES[MAX];

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
                seeds1[i] = SEEDS[i];
            } else {
                cards2[i-20] = CARDS[i];
                seeds2[i-20] = SEEDS[i];
            }
        }
    }
    
    while (END) {
        for (i=0; i<MAX; i++) {
            
        }
    }

}