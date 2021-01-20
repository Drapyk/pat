#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void SelectSort(int a[],int n)
{
    int min;
    int temp;
    printf("%d\n",n);
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min])
                min=j;
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}
int main()
{
    int a[]={4,5,2,6,1,3,6};
    SelectSort(a,sizeof(a)/sizeof(int));
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
        printf("%d",a[i]);
    return 0;
}
