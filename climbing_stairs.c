#include <stdio.h>

int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    int first = 1;
    int second = 2;
    int current = 0;

    for (int i = 3; i <= n; i++) {
        current = first + second;
        first = second;
        second = current;
    }

    return second;
}

int main() {
    int n;

    printf("Enter the number of steps: ");
    
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n >= 1 && n <= 45) {
        printf("Result: %d\n", climbStairs(n));
    }
    else 
    printf("enter steps in between 1 to 44");

    return 0;
}
