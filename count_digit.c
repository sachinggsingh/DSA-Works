/* Write a program in C to count the digits of a given number using recursion*/

#include<stdio.h>
int countNum(int num)
{
    if(num)
    return 1 + countNum(num/10);
}
int main()
{
     int num;
    printf("\nEnter A Number: ");
    scanf("%d", &num);

    printf("\nTotal Digits in %d :  %d", num, countNum(num));
    return 0;
}
