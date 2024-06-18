#include<iostream>

using namespace std;

class Demo
{
    public:
       int X,Y;

        Demo()
        {
           cout<<"Inside Constructor\n";
           X=10;
           Y=20;
        }

        void Fun()  //non constant function
        {
            cout<<"Inside Fun\n";
            X++;
            Y++;
        }

        void Gun() const  //constant function
        {
            cout<<"Inside Gun\n";
            //X++;
            //Y++;
        }

};

int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.Fun();//normal object normal function
    obj1.Gun();//normal objecty constant function

    
    obj2.Fun();//const object normal function     not allowed
    obj2.Gun();//constant object constant function

    return 0;
}