#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    void setval()
    {
        cout<<"\n Enter A : ";
        cin>>a;
        cout<<"\n Enter B : ";
        cin>>b;
    }
    void getval()
    {
        cout<<"\n a :"<<a<<"\t b :"<<b;
    }
    void dosum()
    {
        cout<<"\n a + b  :"<<a + b;
    }
};
    int main()
    {   
        Arith obj1;
        obj1.setval(); 
        obj1.getval();
        obj1.dosum();
    }
    