#include <stdio.h>

int main() {
    int size;
    
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++){
        printf("enter the %d value:\n",(i+1));
        scanf("%d",&a[i]);
    }
    int buy=0;
    int sell=0;
    int profit=0;
    for(int i=0;i<(size-1);i++)
    {
         for(int j=0;j<(size-1);j++)
         {
             int pur=a[j]-a[i];
             if(pur>profit){
                 buy=a[i];
                 sell=a[j];
                 profit=pur;
             }
         }
    }
    printf("buy=%d \t sell=%d\t profit=%d\n",buy,sell,profit);

    return 0;
}