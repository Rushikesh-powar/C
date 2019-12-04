#include <stdio.h>
#include <stdlib.h>
int mini(int arr[],int low,int up);
int binary(int arr[],int lb,int up,int item ,int loc);

int main()
{
    int n=100,ub,lb;
    int k,x,item;
    int loc=0,temp=0;

    printf("Enter the array size: ");
    scanf("%d",&n);

    int arr[n];

    lb = 0,ub = n;

    printf("\nEnter the array element: ");
    for(k=0 ; k<n ; k++)
        scanf("%d",&arr[k]);

    for(k=0 ; k<n ; k++)
    {
        loc=mini(arr,k,n);
        temp = arr[loc];
        arr[loc]=arr[k];
        arr[k]=temp;
    }

    printf("\nDo you want to search an item? :\n1:Yes \n2:No \nChoice:");
    scanf("%d",&x);

    if(x==1)
    {
        printf("\nEnter the element to be searched: ");
        scanf("%d",&item);
        loc=binary(arr,lb,ub,item,loc);

        printf("\nThe sorted array is: ");
        for(k=0 ; k<n ; k++)
            printf(" %d ",arr[k]);
    }
    else
    {
        printf("\nThe sorted array is: ");
        for(k=0 ; k<n ; k++)
            printf(" %d ",arr[k]);
    }

    return 0;
}

int mini(int arr[],int low,int up)
{
    int min = low;

    while(low<up)
    {
        if(arr[low]<arr[min])
            min = low;
            low++;
    }
    return min;
}
int binary(int arr[],int lb,int ub,int item ,int loc)
{
    int beg=lb,end=ub;
    int mid=((beg+end)/2);

    while(beg<=end && arr[mid] != item)
    {
        if(item<arr[mid])
           end=mid-1;

        else
            beg=mid+1;

        mid=((beg+end)/2);
    }
    if(arr[mid]==item)
    {
        loc=mid;
        printf("\nThe element %d is at position %d \n",item,loc+1);
        return (loc+1);
    }
    else
    {
       printf("\nThe element %d is not present in the array!",item);
       return (loc='\0');
    }
}

