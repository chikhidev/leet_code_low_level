#include "main.h"

int T(int n){
    if (n==0) return 0;
    
    int *FAB = (int*)malloc((n + 1) * sizeof(int));
    int target, i = 0;

    FAB[0] = 0;
    FAB[1] = FAB[2] = 1;
    while (i <= n){
        if (i >= 3)
            *(FAB + i) = *(FAB + i - 1) + *(FAB + i - 2);
        i++;
    }

    target = FAB[n];

    free(FAB);
    return target;
}

int POWER(int n) {
    int result = 1;

    while (n > 0) {
        result *= 2;
        n--;
    }
    return result;
}

int tribonacci(int n) {
    return (POWER(2) + 1);
}

//T(n+3) = T(n) + T(n+1) + T(n+2)
//so:
//T(n) = - T(n+1) - T(n+2) + T(n+3)