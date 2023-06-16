#include "main.h"

int power_of(int pow){
    int res;
    
    if (pow == 0) return 1;
    if (pow == 1) return 2;

    res = 0;
    while (pow > 1){
        res *= 2;
        pow--;
    }
    return res;
}

int climbStairs(int n){
    int power = 0;
    if (n == 1 || n == 0) return n;
    if (n >= 2)
        power = n - 2;
    return power_of(power) + 1;
}