#include<stdio.h>
void merge(int arr[],int lb,int ub,int mid)
{
     int arr2[100];
     int i,j,k;
     i=lb;
     j=mid+1;
     k=lb;
     while(i<=mid && j<=ub)
     {
         if(arr[i]<arr[j])
         {
            arr2[k]=arr[i];
            i++;
            k++;
         }
         else
         {
             arr2[k]=arr[j];
             j++;
             k++;
         }
     }
     if(i>mid)
     {
         while(j<=ub)
         {
             arr2[k]=arr[j];
             j++;
             k++;
         }
     }
     else
     {
         while(i<=mid)
         {
              arr2[k]=arr[i];
              i++;
              k++;
         }
     }
     for(i=lb;i<=ub;i++)
     {
          arr[i]=arr2[i];
     }
}
void mergesort(int arr[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
       mid=(lb+ub)/2;
       mergesort(arr,lb,mid);
       mergesort(arr,mid+1,ub);
       merge(arr,lb,ub,mid);
    }
}
void main()
{
    int i,lb,ub;
    int arr[100];
    printf("Enter lb and ub:");
    scanf("%d %d",&lb,&ub);
    for(i=lb;i<=ub;i++)
    {
         scanf("%d",&arr[i]);
    }
    mergesort(arr,lb,ub);
    for(i=0;i<=ub;i++)
    {
        printf("%d ",arr[i]);
    }
}
