#include "main.h"

int main(){
    int goal = 10;
    
    while (goal >= 0){
        printf("%d:\t%d\n", goal, tribonacci(goal));
        goal--;
    }

    return 0;
}