#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "madam";
    int n = strlen(A);
    int i,j;
    for(i=0,j<n-1;i<j;i++,j--)
    {
        if(A[i]!=A[j])
        printf("%s is not a Palindrome",A);
    }
    printf("%s is a Palindrome",A);
    return 0;
}
