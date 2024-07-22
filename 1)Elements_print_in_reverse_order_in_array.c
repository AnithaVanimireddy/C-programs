#include <stdio.h>
int main() 
{
    int n,i,a[100];
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements stored in array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Elements stored in reverse order:");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",a[i]);
    }
}
 
