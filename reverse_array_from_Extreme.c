//  Reverse the Array by changing the Extremes values
#include<stdio.h>
int main()
{
    int A[]  = {1,2,3,4,5};
    int length = 5;
    int i,j;
    for(i=0,j=length - 1;i<j;i++,j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    printf("The reversed array is:  ");
    for(i=0; i<length; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
