// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter A value:");
    scanf("%d",&a);
    printf("enter B value:");
    scanf("%d",&b);
    printf("enter C value:");
    scanf("%d",&c);
    if(a==2&&b==2&&c==2)
    printf("10");
    else if(a==b&&b==a&&c==a)
    printf("5");
    else if(b!=a&&c!=a)
    printf("1");
    else
    printf("0");

    return 0;
}