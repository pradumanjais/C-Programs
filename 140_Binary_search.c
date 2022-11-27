// Write a program for searching an element in a sorted array through binary search.
#include<stdio.h>
int Binary_Search(int arr[],int n,int item);
int main()
{
    int i,n,item,index,arr[50];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0; i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the item to be searched\n");
    scanf("%d",&item);
    index = Binary_Search(arr,n,item);
    if(index == -1)
        printf("%d not found in the given array\n",item);
    else
        printf("%d found at %d position\n",item,index+1);
    return 0;       
}

int Binary_Search(int arr[], int n, int item)
{
    int low=0,up=n-1,mid;
    while (low<=up)
    {
        mid = (low+up)/2;
        if(item>arr[mid])
            low = mid+1;
        else if(item<arr[mid])
            up = mid-1;
        else
            return mid;
    }
    return -1;
}


