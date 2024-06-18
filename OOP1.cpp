#include<iostream>

using namespace std;

//class declaration
class Demo
{
    public:// access specifier
        int no1;
        int no2; //Characteristics

        Demo() // Constructor
        {
            cout<<"Include Constructor\n";
            no1=11;
            no2=21;
        }

        ~Demo() // Desrtuctor
        {
            cout<<"Include Destructor\n";
        }

        void Fun() // Behaviour
        {
            cout<<"Inside Fun of Demo class\n";
        }       
       

};

int main()
{
    cout<<"Inside Main\n";
    Demo obj1;
    cout<<"Size of Object is : "<<sizeof(obj1)<<"\n";
    cout<<"Value of no1: "<<obj1.no1<<"\n";
    cout<<"Value of no2: "<<obj1.no2<<"\n";
    obj1.Fun();
   


    return 0;
}