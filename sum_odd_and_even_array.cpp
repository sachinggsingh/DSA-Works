// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int sumOfEven = 0;
    int sumOfOdd = 0;
    cout <<"The 10 entries of the Array are: "<<endl;
    for(int i= 0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]%2)
        sumOfOdd = sumOfOdd + arr[i];
        else
        sumOfEven = sumOfEven + arr[i];
    }
    cout <<"The Sum of all the Even numbers in the Array is: "<<sumOfEven<<endl;
    cout<<"The Sum of all the Odd numbers in the Array is: "<<sumOfOdd<<endl;
    
    return 0;
}
