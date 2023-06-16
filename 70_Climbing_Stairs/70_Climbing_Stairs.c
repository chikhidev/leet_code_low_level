#include "main.h"

int climbStairs(int n){
    int power = 0, factor = 0;

    if (n >= 2)
        power = n - 2;
    factor = (2 ^ factor) + 1;

    return factor;
}