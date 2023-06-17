#include "main.h"

int tribonacci(int n){
    if (n==0) return 0;
    
    int *FAB = (int*)malloc((n + 1) * sizeof(int));
    int target, i = 3;

    FAB[0] = 0;
    FAB[1] = FAB[2] = 1;
    while (i <= n){
        *(FAB + i) = *(FAB + i - 1) + *(FAB + i - 2);
        printf("%d\n", *(FAB + i));
        i++;
    }

    target = FAB[n];

    free(FAB);
    return 0;
}

//T(n+3) = T(n) + T(n+1) + T(n+2)