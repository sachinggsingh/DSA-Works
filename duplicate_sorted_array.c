/*find the duplicate in the Array (method 1)*/
#include<stdio.h>
int main()
{
    int arr[] = {3,6,8,8,10,12,15,15,15,20};
    int i;
    int n = 10;
    int lastDuplicate = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!= lastDuplicate)
        {
            printf("%d is the Duplicate\n",arr[i]);
            lastDuplicate = arr[i];
        }
    }
    return 0;
}