#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* multiply(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0) return "0";

    
    int* res = (int*)calloc(len1 + len2, sizeof(int));
    
     
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j;
            int p2 = i + j + 1;
            
            int sum = mul + res[p2];
            res[p2] = sum % 10;
            res[p1] += sum / 10;
        }
    }

    char* resultStr = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    int k = 0;
    int i = 0;
    while (i < len1 + len2 && res[i] == 0) i++;
    
    while (i < len1 + len2) {
        resultStr[k++] = res[i++] + '0';
    }
    resultStr[k] = '\0';

    free(res);
    return resultStr;
}

int main() {
    char s1[201], s2[201];
    
    printf("Enter first number: ");
    scanf("%s", s1);
    printf("Enter second number: ");
    scanf("%s", s2);

    char* product = multiply(s1, s2);
    printf("Product: %s\n", product);

    free(product);
    return 0;
}
