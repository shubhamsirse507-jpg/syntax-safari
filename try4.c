#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int comparestings(const void *a, const void *b){
 return strcmp((const char *)a, (const char *)b);
}
//Binary seearch fuction
int binarySearch(char arr[][20],int size,char key[20])
{
     
  int low = 0 , high = size -1;

    while (low <=high)
    {
        int mid = (low + high)/2;
        int cmp = strcmp(arr[mid],key);
            if(cmp == 0)
            return mid;
            else if (cmp<0)
            low =mid +1;
            else
            high = mid -1;
        return -1;
    }
};
   
    int main()
    {
        char arr[5][20] = {"Shubham","Ankit","Dnyaneshwar","rahul","viraj"};
        char key[20],comparestrings;
        int size = sizeof(arr)/sizeof(arr[0]);
        //Sorting the array
        qsort(arr , size , sizeof(arr[0]), comparestrings);

        printf("Enter string to be searched:");
        scanf("%s",key);

       int result = binarySearch(arr, size, key);
        if(result != -1)
        {
            printf("string found\n",result);
        }
        else{
            printf("string not found\n");
        }
        return 0;
    }

