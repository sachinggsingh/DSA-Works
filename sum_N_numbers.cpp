// // Write a recursive function to calculate sum of first N natural numbers.
#include<iostream>
using namespace std;
int SumNum(int n)
{
    if(n==1)
    return 1;
    else
    return n + SumNum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Number till which you want the sum of All numbers"<<endl;
    cin>>n;
    if(n<1)
    cout<<"Enter the Valid input"<<endl;
    cout<<"The Sum till "<<n<< " is "<<SumNum(n)<<endl;
    return 0;
}
