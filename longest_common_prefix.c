#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    // Start with the first string as the base for comparison
    char* prefix = strs[0];
    
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        // Compare current string with the prefix character by character
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        // Shorten the prefix by placing a null terminator at the point of divergence
        prefix[j] = '\0';
        
        if (prefix[0] == '\0') return "";
    }
    
    return prefix;
}

int main() {
    // Example 1
    char* ex1[] = {"flower", "flow", "flight"};
    int size1 = 3;
    printf("Example 1: %s\n", longestCommonPrefix(ex1, size1));

    // Example 2
    char* ex2[] = {"dog", "racecar", "car"};
    int size2 = 3;
    printf("Example 2: %s\n", longestCommonPrefix(ex2, size2));

    return 0;
}