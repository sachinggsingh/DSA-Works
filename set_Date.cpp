// Display Date using Constructors 

#include<iostream>
using namespace std;
class Date
{
    int dd;
    int mon;
    int year;
    public:
    Date()
    {
        dd = 14;
        mon = 05;
        year = 2024;
    }
    void Display()
    {
        cout<<"The Date is: "<<dd<<"/"<<mon<<"/"<<year<<endl;
    }
};
int main()
{
    Date D1;
    D1.Display();
    return 0;
}