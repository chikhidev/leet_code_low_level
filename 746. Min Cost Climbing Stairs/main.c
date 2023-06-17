#include "main.h"

int main(){
    int cost[10] = {
        1,100,1,1,1,100,1,1,100,1
    };
    printf("min: %d", minCostClimbingStairs(cost, 10));
    
    return 0;
}