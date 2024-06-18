#include<iostream>
using namespace std;

class  Base
{
    public:
        int A,B;
        Base()
        {
            cout<<"Inside Base constructor\n";
            A=11;
            B=21;
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }

};
class Derived:public Base
{
    public:
        int x,y;
        Derived()
        {
            cout<<"Inside Derived constructor\n";
            x=51;
            y=101;
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }

};

class Derivedx:public Derived
{
    public:
        int p;
        Derivedx()
        {
            cout<<"Inside Derivedx constructor\n";
            p=111;
        }
        ~Derivedx()
        {
            cout<<"Inside Derivedx destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derivedx Sun\n";
        }

};

int main()
{
    Derivedx dobj;
    cout<<"size of object is :"<<sizeof(dobj)<<"\n";
    cout<<dobj.A<<"\n";//11
    cout<<dobj.B<<"\n";//21
    cout<<dobj.x<<"\n";//51
    cout<<dobj.y<<"\n";//101
    cout<<dobj.p<<"\n";//111

    dobj.Fun();//Base Fun
    dobj.Gun();//Derived Gun
    dobj.Sun();//Derivedx Sun

    return 0;
}