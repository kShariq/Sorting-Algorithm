#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
merge(int *left, int*right, int*A)
{
    int nL,nR;
    nL=sizeof(left);
    nR=sizeof(right);
    int i,j,k;
    i=j=k=0;
    while(i<nL && j<nR)
    {
        if(left[i]<=right[j])
        {
            A[k]=left[i];
            i++;
        }
        else
        {
            A[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<nL)
    {
        A[k]=left[i];
        i++;
        k++;
    }
    while(j<nR)
    {
        A[k]=right[j];
        j++;
        k++;
    }

}
MS(int *A)
{
    int n=sizeof(A);
    int mid,i;
    if(n<2)
        return;
    mid=n/2;
    int left[mid];
    int right[n-mid];
    for (i=0;i<mid;i++)
        left[i]=A[i];
    for (i=mid;i<n;i++)
        right[i-mid]=A[i];
    MS(left);
    MS(right);
    merge(left,right,A);
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
    MS(A);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
