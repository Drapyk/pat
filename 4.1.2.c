#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Insert_Sort(int a[],int n)
{
    int temp;
    int j;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
            if(temp<a[j])
            {
                a[j+1]=a[j];
            }
            else
                break;
        a[j+1]=temp;
    }
}
int main()
{
    int a[]={4,5,2,6,1,3,6};
    Insert_Sort(a,sizeof(a)/sizeof(int));
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
        printf("%d",a[i]);
    return 0;
}
