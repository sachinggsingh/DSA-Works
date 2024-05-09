// // Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user

#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int sum = 0;
    cout<<"Enter the 10 enteries of the array: "<<endl;

    for(int i = 0;i<10;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout <<"The Sum of All the entries in the Array are "<<sum<<endl;
    
    return 0;
}
