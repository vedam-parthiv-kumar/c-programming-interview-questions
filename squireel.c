// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int day;
    printf("enter no.of cigars value:");
    scanf("%d",&a);
    printf("enter 0 is not weekend and 1 for weekend\n");
    printf("enter the weekend or not:");
    scanf("%d",&day);
    if(day)
    {
        printf("it is a weekend\n");
        if(a>40)
        {
            printf("true");
        }
        else
        printf("false");
    }
    else
    if(a>40&&a<=60){
        printf("true");
    }
    else{
    printf("false");
    }
    
    return 0;
}