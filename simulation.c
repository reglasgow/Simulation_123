#include <stdlib.h>
#include <time.h>
#define MAX 40

main() {
	int CARDS[MAX], SEEDS[MAX], cards1[MAX], seeds1[MAX/2], cards2[MAX], seeds2[MAX/2];
    int seed;
	int i, y, z, x, X, e, END=1;
    int count, POINTS, TABLE[MAX];

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
    
    int Index=0;

    for (i=0; i < 1; i++) {

        if (i%2+1==1) {Index=1; i--;} else if (i%2+1==2) {Index=2; i--;}        /*Assegna Indici*/ /*controllo del ciclo tramite i*/

        if (Index==1) {y = cards1[0];} else {y=cards2[0];}                      /*prende la carta*/

        if (y>4 || y==0) {

            TABLE[i] = y; 
            if (Index==1) {
                for (z=0; z < MAX; z++) { cards1[z] = cards1[z+1]; }
            } else { 
                for (z=0; z < MAX; z++) { cards2[z] = cards2[z+1]; }
            }

        } else if (y=1) {

            if (Index==1) {      /*Player 1*/

                if (cards2[0] != 1 || cards2[

            } else {            /*Player 2*/

            }

        } else if (y=2) {

            if (Index-1) {      /*Player 2*/


            } else {            /*Player 1*/

            }

        } else if (y=3) {

            if (Index-1) {      /*Player 2*/


            } else {            /*Player 1*/

            }

        }

    }

}