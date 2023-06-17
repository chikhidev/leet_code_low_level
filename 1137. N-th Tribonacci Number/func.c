#include "main.h"

int tribonacci(int n){
    if (n==0) return 0;
    if (n > 36) n = 36;
    
    int *FAB = (int*)malloc((n + 1) * sizeof(int));
    int target, i = 0;

    FAB[0] = 0;
    FAB[1] = FAB[2] = 1;

    while (i <= (n + 1)){
        if (i >= 3)
            *(FAB + i) = *(FAB + i - 3) + *(FAB + i - 1) + *(FAB + i - 2);
        i++;
    }

    target = FAB[n];

    free(FAB);
    return target;
}


//T(n+3) = T(n) + T(n+1) + T(n+2)
//so:
//T(n) = - T(n+1) - T(n+2) + T(n+3)