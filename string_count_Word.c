/*Counting the Words in the String*/
#include<stdio.h>
#include <string.h>
int main()
{
    char A[] = "How    are you tell me";
    int i;
    int word =1;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i] ==' '&&A[i-1]!=' ')
        {
            word = word + 1;
        }
       
    }
     printf("%d are the words in the given String\n",word);
    return 0;
}

