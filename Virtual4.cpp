#include<iostream>

using namespace std;

class Base
{
    public:
        int A,B;

        void Fun() //1000       Defination
        {
            cout<<"Base Fun\n";
        }

        virtual void Gun() //2000       Deination
        {
            cout<<"Base Gun\n";
        }

        void Sun() //3000       Deination
        {
            cout<<"Base Sun\n";
        }
        virtual void Mun()
        {
            cout<<"Base Mun\n"; //4000
        }

};

class Derived: public Base
{
    public:
        int X,Y;
    
        virtual void Gun() 
        {
            cout<<"Derived Gun\n";
        }

        virtual void Sun()
        {
            cout<<"Derived Sun\n";
        }

        virtual void Run() 
        {
            cout<<"Derived Run\n";
        }

};


int main()
{    
    Derived dobj;

    Base *bp=&dobj; //

    bp->Fun(); //Base Fun
    bp->Gun(); //Derived Gun
    bp->Sun(); //Base Sun
    bp->Mun(); //Base Mun
    //bp->Run(); //Error

    return 0;
}