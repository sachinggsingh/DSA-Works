#include<stdio.h>
#include<conio.h>
int main()
{
    int num, result;
    printf("Enter the Three Digit number");
    scanf("%d",&num);
    if(num<=0 || num<100)
    {
        printf("Enter the valid number please!!");
    }
    result = num%10*100 + num/10;
    printf("After rotating the number it is: %d",result);
    
    getch();
}
