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
    int amount=0;
    int area=0;
    int h1,h2;
    for(int i=0;i<(size-1);i++)
    {
         for(int j=0;j<(size-1);j++)
         {
             if(a[j]>a[i]){
                 amount=a[i]*(j-i);
                 
             }
             else{
                 amount=a[j]*(j-i);
             }
             if(amount>area){
                 h1=a[i];
                 h2=a[j];
                 area=amount;
             }
             
         }
    }
    printf("h1=%d \t h2=%d\t area=%d\n",h1,h2,area);

    return 0;
}