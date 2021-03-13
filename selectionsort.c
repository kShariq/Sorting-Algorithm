#include<stdio.h>
#include<stdlib.h>
int ss(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int imin=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[imin])
            {
                imin=j;
            }
        }
        int temp;
        temp=arr[i];
        arr[i]=arr[imin];
        arr[imin]=temp;
    }
}
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ss(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
