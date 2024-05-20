/*Counting Vowel and consonant in the String*/
#include<stdio.h>
#include <string.h>
int main()
{
    char A[] = "Hi How do you Do";
    int i;
    int vcout = 0,ccount =0;
    for(i = 0; A[i] != '\0';i ++)
    {
        if(A[i] == 'a' || A[i] == 'e' ||  A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] =='A' || A[i] == 'E' || A[i] == 'I' || A[i] =='O'|| A[i] == 'U')
        {
            vcout++;
        }
        else if(A[i] >= 65 && A[i] <= 90 || A[i] >= 97 && A[i] <= 122)
        {
            ccount++;
        }
    }
    printf("%d %d",vcout,ccount);
    
    return 0;
}
