// /*Reversed String (method -1)*/
#include<stdio.h>
#include <string.h>
int main()
{
    char A[] = "python";
    int t;
    int n=6;
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    printf("%s is the reversed String",A);
    return 0;
}
// /*Method -2*/
#include<stdio.h>
#include <string.h>
int main()
{
    char A[] = "python";
    char B[7];
    int n = 6; // Length of the string "python"
    int i;

    for(i = n - 1; i >= 0; i--)
    {
        B[n - 1 - i] = A[i];
    }
    B[n] = '\0'; // Null-terminate the string B

    printf("%s\n", B);

    return 0;
}



