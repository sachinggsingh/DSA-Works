#include<stdio.h>
#include<conio.h>

int countNumber(int);
int main()
{
    int num;
    printf("Enter the number of any lenght!!");
    scanf("%d",&num);
    
    printf("Total digits of the number you entered is: = %d",countNumber(num));
    
    getch();
}
int countNumber(int num)
{
    if(num)
    return 1 + countNumber(num/10);
}

