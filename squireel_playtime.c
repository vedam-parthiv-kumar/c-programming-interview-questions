// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int day;
    printf("enter no.of playtime value:");
    scanf("%d",&a);
    printf("enter 0 is not summer and 1 for summer\n");
    printf("enter the weekend or not:");
    scanf("%d",&day);
    if(day)
    {
        printf("it is a weekend\n");
        if(a<100)
        {
            printf("true");
        }
        else
        printf("false");
    }
    else
    if(a>60&&a<=90){
        printf("true");
    }
    else{
    printf("false");
    }
    
    return 0;
}