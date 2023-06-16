#include "main.h"

int fib(int n){
    int fb[n + 1];
    int i = 2;
    fb[0] = 0;
    fb[1] = fb[2] = 1;

    while (i < (n + 1)) {
        fb[i] = fb[i -1] + fb[i - 2];
        i++;
    }

    return fb[n];
}

//0,1,1,2,3,5,8