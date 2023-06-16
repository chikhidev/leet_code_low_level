#include "main.h"

int power_of(int n, int pow){
    int res;
    
    if (pow == 0) return 1;
    if (pow == 1) return n;

    res = 0;
    while (pow-- > 0)
        res *= n;
    return res;
}

int climbStairs(int n){
    int power = 0;
    if (n == (1 || 0)) return n;
    if (n >= 2)
        power = n - 2;
    return power_of(2 , power) + 1;
}