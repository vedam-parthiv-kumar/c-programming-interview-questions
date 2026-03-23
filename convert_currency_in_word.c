#include <stdio.h>

void printWords(int n) {
    if (n == 0) {
        printf("Zero");
        return;
    }

    // Array of strings (standard arrays, no explicit pointer arithmetic)
    char units[][10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char teens[][10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char tens[][10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Handle Thousands
    if (n >= 1000) {
        printf("%s Thousand ", units[n / 1000]);
        n %= 1000;
    }

    // Handle Hundreds
    if (n >= 100) {
        printf("%s Hundred ", units[n / 100]);
        n %= 100;
    }

    // Handle Tens and Units
    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        if (n % 10 > 0) {
            printf("%s ", units[n % 10]);
        }
    } else if (n >= 10) {
        printf("%s ", teens[n - 10]);
    } else if (n > 0) {
        printf("%s ", units[n]);
    }
}

int main() {
    int num;
    printf("Enter a number (0-9999): ");
    scanf("%d", &num);

    if (num < 0 || num > 9999) {
        printf("Out of supported range.");
    } else {
        printf("In Words: ");
        printWords(num);
    }

    return 0;
}
