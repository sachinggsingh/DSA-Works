#include<stdio.h>
#include<conio.h>

double power(int ,int);


int main()
{
    int base,expo;
    printf("/nEnter the Base: ");
    scanf("%d",&base);
    printf("/nEnter the Exponent: ");
    scanf("%d",&expo);
    
    printf("/nResult = %lf ",power(base,expo));
    
    getch();
}
double power(int base,int expo)
{
    if(expo==0)
    return 1;
    else if (expo > 0)
        return base * power(base, expo - 1);
    else
        return (1.0 / base) * power(base, expo + 1);
}
