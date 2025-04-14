#include<stdio.h>
int partition(int a[],int lb,int ub)
{
     int pivot=a[lb];
     int i=lb;
     int j=ub;
     while(i<j)
     {
         while(a[i]<=pivot)
         {
             i++;
         }
         while(a[j]>pivot)
         {
             j--;
         }
         if(i<j)
         {
             int temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
     int t=a[lb];
     a[lb]=a[j];
     a[j]=t;
     return j;
}
void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int pos=partition(a,lb,ub);
        quicksort(a,lb,pos-1);
        quicksort(a,pos+1,ub);
    }
}
void main()
{
    int a[]={45,4,3,12,3,4};
    int i;
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nBefore sorting array elements are -\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nAfter sorting of elements -\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
