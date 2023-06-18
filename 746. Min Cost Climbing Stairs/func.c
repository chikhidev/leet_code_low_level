#include "main.h"

//[1,100,1,1,1,100,1,1,100,1]
//[10,1,1,1,1,100,1,1,100,1]

int minCostClimbingStairs(int* cost, int costSize){
    if(costSize == 0) return 0;
    if(costSize == 3) return cost[1];

    int i, res = 0;

    if (cost[0] < cost[1]){
        i = 0;
        res += cost[0];
    }
    else{
        i = 1;
        res += cost[1];
    };
    //0, 0, 0, 1
    while (i < costSize){
        if(i + 2 < costSize && ((cost[i + 1] + cost[i + 2]) != 0 )){
            if (cost[i + 1] < cost[i + 2])
                res += cost[i + 1];
            else
                res += cost[i + 2];
            i+=2;
        }else if (i + 1 < costSize && cost[i + 1] != 0){
            res += cost[i + 1];
            i++;
        }else{
            break;
        }
    }
    return res;
}