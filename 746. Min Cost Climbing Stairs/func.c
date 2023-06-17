#include "main.h"

//[1,100,1,1,1,100,1,1,100,1]

int minCostClimbingStairs(int* cost, int costSize){
    if(costSize == 0) return 0;
    int i = 1;
    while (i < costSize){
        printf("%d\n", cost[i]);
    }
    return 0;
}