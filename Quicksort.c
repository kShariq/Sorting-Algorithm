#include<stdio.h>
#include<stdlib.h>
int partition(int *A, int start, int end)
{
    int i,temp;
    int pivot=A[end];
    int partition_index=start;
    for(i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            temp=A[i];
            A[i]=A[partition_index];
            A[partition_index]=temp;
            partition_index++;
        }
    }
    temp=A[end];
    A[end]=A[partition_index];
    A[partition_index]=temp;
    return partition_index;
}
QS(int *A,int start,int end)
{
    if(start<end)
    {
        int partition_index=partition(A,start,end);
        QS(A,start,partition_index-1);
        QS(A,partition_index+1,end);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    QS(A,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
