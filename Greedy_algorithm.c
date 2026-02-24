#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target, count = 0;

    printf("Enter number of denominations: ");
    if (scanf("%d", &n) != 1) return 1;

    int *coins = (int *)malloc(n * sizeof(int));

    printf("Enter denominations (descending): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    printf("Enter target amount: ");
    scanf("%d", &target);

    printf("\nProcessing...\n");

    for (int i = 0; i < n; i++) {
        while (target >= coins[i]) {
            target -= coins[i];
            count++;
            printf("Step %d: Used %d | Remaining: %d\n", count, coins[i], target);
        }
    }

    printf("\nTotal coins used: %d\n", count);

    free(coins);
    return 0;
}
