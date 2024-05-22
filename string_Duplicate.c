/*finding the dupicate in String (METHOD - 1) Hash-Table*/
#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "finding";
    int H[26];
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            printf("%c\n",i+97);
            printf("%d\n",H[i]);
        }
    }
    return 0;
}
