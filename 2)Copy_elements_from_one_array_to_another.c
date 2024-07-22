#include<stdio.h>
void main()
{
    int n,i,a1[100],a2[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a1[i]);
    printf("Elements in an array:");
    for(i=0;i<n;i++)
    {
    printf("%d ",a1[i]);
    }
    printf("\n");
    printf("Coping the elements:");
    for(i=0;i<n;i++)
    {
    a2[i]=a1[i];
    printf("%d ",a2[i]);
    }
}
