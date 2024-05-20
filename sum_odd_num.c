// Write  a prograam to find the sum of odd numbers

#include<stdio.h>
int main()
{
    int i,isOdd,last_num;
    int sum = 0;
    printf("Enter the Last number: ");
    scanf("%d",&last_num);
    for(i = 0;i<=last_num;i++)
    {
        isOdd = i%2;
        if(isOdd)
        {
            sum = sum +i;
        }
    }
    printf("The sum of Odd number till %d is %d",last_num,sum);
    
    return 0;
}
