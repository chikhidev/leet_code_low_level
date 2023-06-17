#include "main.h"

int tribonacci(int n){
    if (n==0) return 0;
    
    int *FAB = (int*)malloc((n + 1) * sizeof(int));
    int target;

    FAB[0] = 0;
    FAB[1] = FAB[2] = 1;
    while (FAB++)
        printf("%d", *FAB);

    target = FAB[n];

    free(FAB);
    return 0;
}

//T(n+3) = T(n) + T(n+1) + T(n+2)