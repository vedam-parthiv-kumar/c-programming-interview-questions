#include <stdio.h>

int numberOfSteps(int num) {
    int steps = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num - 1;
        }
        steps++;
    }
    return steps;
}

int main() {
    int inputNum;

    printf("Enter a number: ");
    scanf("%d", &inputNum); 

    int result = numberOfSteps(inputNum);

    printf("Steps: %d\n", result);

    return 0;
}
