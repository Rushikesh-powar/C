#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k,l,v,temp;

    printf("Enter the Array Size: ");
    scanf("%d",&v);

    int arr[v];
    printf("Enter the array elements: ");
    for(i=0;i<v;i++)
        scanf("%d",&arr[i]);

    for(j=0;j<v-1;j++)
        for(k=0;k<v-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }

        }

        printf("The shorted list is: ");
        for(l=0;l<v;l++)
            printf(" %d ",arr[l]);

    return 0;
}
