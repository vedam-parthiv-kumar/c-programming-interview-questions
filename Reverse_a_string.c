#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }

    printf("Reversed: %s\n", str);
    return 0;
}
