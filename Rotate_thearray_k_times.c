#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int k;
    printf("How much time you want to rotate the array:\n");
    scanf("%d",&k);
    int i,arr[n];
    for ( i = 0; i <n; i++)
    {
        printf("Enter the %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("here is your array:");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nhere is your rotated array:");
    int j;
   for ( j = 0; j <k; j++)
   {
   
    int temp=arr[n-1];
    for ( i =n-1; i>=0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
   }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

    
    
    
}
