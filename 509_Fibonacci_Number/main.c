#include "main.h"

int main(){
    int goal = 70;
    
    while (goal >= 0){
        printf("%d", fib(goal));
        goal--;
    }

    return 0;
}