#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
int ms(int arr[], int n)
{
    int k,i;
    for(k=1;k<=n-1;k++)
    {
        for(i=0;i<=n-k-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
        }
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
    ms(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

