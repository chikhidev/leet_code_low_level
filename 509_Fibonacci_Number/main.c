#include "main.h"

int main(){
    int goal = 70;
    
    while (goal--){
        printf("%d", fib(goal));
    }

    return 0;
}