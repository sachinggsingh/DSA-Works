/*Inheritance Multiple-inheritance*/
#include<iostream>
using namespace std;
class mammals
{
    public:
   
        void display1()
    {
        cout<<"I'm Mammal"<<endl;
    }
};
class marineAnimals
{
    public:
    void display2()
    {
        cout<<"I'm Marine Animal"<<endl;
    }
};
class bluewhale : public mammals,public marineAnimals
{
    public:
    void display3()
    {
        cout<<"I'm both Marine animals as well as Mammal"<<endl;
    }
};
int main()
{
    mammals m1;
    marineAnimals a1;
    bluewhale b1;
    m1.display1();
    a1.display2();
    b1.display3();
    
    // calling by the object of bluewhale which we have inherited
    b1.display1();
    b1.display2();
    
    return 0;
}