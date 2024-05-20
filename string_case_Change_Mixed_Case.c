/*Changing the Case of the String  (Mixed Case Char)*/
#include<stdio.h>
#include <string.h>
int main()
{
    char A[]="WelcoMe";
    int i;
    for(i=0;A[i]!='\n';i++)
    {
        if(A[i]>=65&&A[i]<=90)
        {
            A[i] = A[i] + 32;
        }
        else if(A[i]>='a'&&A[i]<='z')
        {
            A[i] = A[i] - 32;
        }
    }
    printf("%s",A);
    return 0;
}

