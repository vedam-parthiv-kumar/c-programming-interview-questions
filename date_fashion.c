// restaurant table solving code based on the stylishnes
#include <stdio.h>

int main() {
    int a,b;
    printf("INFORMATION:-\n0-no table available\n1-table maybe available\n2-yes table is available\n\n");
    printf("NOTE:-please rate boy or girl within the range 0 to 10\n\n");
    printf("enter the boy style rate:");
    scanf("%d",&a);
     printf("enter the girl style rate:");
    scanf("%d",&b);
    if(a<=2||b<=2){
            printf("0");
        }
        else if(a>=8||b>=8){
        printf("2");
    }
        else 
        printf("1");
    return 0;
}