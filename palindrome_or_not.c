#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    return x == reversedHalf || x == reversedHalf / 10;
}

int main() {
    int input_x;

    printf("Enter an integer: ");
    if (scanf("%d", &input_x) != 1) {
        return 1;
    }

    if (isPalindrome(input_x)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
