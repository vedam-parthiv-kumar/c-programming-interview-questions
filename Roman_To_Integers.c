#include <stdio.h>
#include <string.h>
int romanValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}
int romanToInt(char* s) {
    int total = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        int current = romanValue(s[i]);
        if (i + 1 < length) {
            int next = romanValue(s[i+1]);
            if (current < next) {
                total -= current;
            } else {
                total += current;
            }
        } else {
            total += current;
        }
    }
    return total;
}

int main() {
    char romanInput[20];

    printf("Enter a Roman Numeral (e.g., MCMXCIV): ");
    if (scanf("%19s", romanInput) == 1) {
        int result = romanToInt(romanInput);
        printf("The integer value is: %d\n", result);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}