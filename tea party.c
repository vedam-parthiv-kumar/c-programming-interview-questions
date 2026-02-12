#include <stdio.h>

int main() {
    int tea,candy;
    printf("enter the price of tea:");
    scanf("%d",&tea);
     printf("enter the price of candy:");
    scanf("%d",&candy);
    if(candy<5&&tea<5)
    {
        printf("0");
    }
    else if("tea>=2*candy||candy>=2*tea")
    {
            printf("2");
        }
        else
    {
        printf("1");
    }
    return 0;
}