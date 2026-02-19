#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int length = 0;
    int i = strlen(s) - 1;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\r')) {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    char s[10005]; 

    printf("Enter string: ");
    if (fgets(s, sizeof(s), stdin) != NULL) {
        int result = lengthOfLastWord(s);
        printf("%d\n", result);
    }

    return 0;
}
