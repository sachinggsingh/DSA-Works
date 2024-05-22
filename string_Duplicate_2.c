/*Finding the duplicate of the string (method -2)*/
#include<stdio.h>
#include<string.h>
int main()
{
    char A[] ="finding";
    int n = strlen(A);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            printf("%c is duplicate\n",A[i]);
        }
    }
    return 0;
}