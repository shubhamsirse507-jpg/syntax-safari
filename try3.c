#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag=0;
    char arr[50],key;
    printf("Enter number of character in array:");
    scanf("%d",&n);
    printf("Enter %d characters:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
    }
    printf("Enter character to be searched:");
    scanf("%c",&key);

    for(i=0;i<n;i++){
        if(arr[i] == key)
        {
            printf("string found at position %d\n",key,i);
            flag = 1 ;
            break;
        }
    }

    if(flag == 0)
    {
        printf("character '%c'is not found in array\n",key);
    }
    return 0;
}