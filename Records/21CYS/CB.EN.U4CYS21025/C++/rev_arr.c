#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int rev[n];
    for (int i=0 ; i<n ; i++)
    {
        rev[n-1-i] = a[i];
    }

    printf("Reversed array : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",rev[i]);
    }
    printf("\n");
}