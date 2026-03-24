#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "mySecurePass";
    char userPassword[50];

    printf("Enter password: ");
    scanf("%49s", userPassword);

    if (strcmp(userPassword, correctPassword) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Incorrect Password.\n");
    }

    return 0;
}
