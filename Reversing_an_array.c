#include <stdio.h>
int main(){
    int n,arr[n];
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Here is your array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nHere is your reversed array:\n");
    for ( i = n-1; i >=0; i--)
    {
          printf("%d ",arr[i]);
    }
    
}
