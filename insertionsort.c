#include<stdlib.h>
#include<stdio.h>
int is(int arr[], int n)
{
    int i,hole,value;
    for(i=1;i<n;i++)
    {
        value=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
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
    is(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
