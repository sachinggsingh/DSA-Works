/*Finding max and min in single scan*/
#include<stdio.h>
int main()
{
    int arr[]={10,2,5,3,4,6,9,8,7,45,78};
    int n = 10;
    int max = 10;
    int min = 10;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min = arr[i];
        else if(arr[i]>max)
        max = arr[i];
    }
    printf("%d is the max in this array\n",max);
    printf("%d is the min in this array\n",min);
    
    return 0;
}
