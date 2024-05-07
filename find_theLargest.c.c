#include<stdio.h>
int main()
{
    int n1,n2,large,*p,*q,*r;
    p = &n1;
    q = &n2;
    r = &large;
    
    printf("Enter First Number: ");
    scanf("%d",p);
    printf("Enter Second Number: ");
    scanf("%d",q);
    if(*p>*q)
    {
       *r = *p; 
    }
    else
    *r = *q;
    
    // by using the terniary operator
    // *r = *p > *q ? *p : *q;
    
    printf("The Largest Number is: %d ",*r);
    return 0;
}
