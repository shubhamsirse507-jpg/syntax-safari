#include<stdio.h>
int main()
{
    int arr[50],n,i,key,flag=0;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter %d elments:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter thr elements to search:");
    scanf("%d",&key);
    for( i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
        printf("Elements forund at position %d\n",key,i);
        flag=1;
        break;
         }
    }
    if (flag==0)
    {
        printf("Element not found in the array.\n",key,i);
    }
    return 0;
}
    