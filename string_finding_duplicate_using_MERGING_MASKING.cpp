/*Finding Duplicate in the string using Masking and Merging*/

#include<iostream>
using namespace std;
int main()
{
    char A[] = "finding";
    int H = 0 , x = 0;
    for(int i = 0;A[i]!= '\0';i++)
    {
        x = 1;
        x = x <<(A[i] - 97);   /*Shifting*/
        if((x&H)>0) /*Masking*/
        {
            printf("%c is the duplicate\n",A[i]);
        }
        else
        H = x|H; /*Merging*/
    }
    return 0;
}