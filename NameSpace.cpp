#include<iostream>
//using namespace std;    //Inbuilt namespace

namespace Marvellous
{
    class Demo
    {
        //Logic
    };
}

namespace PPA
{
    class Hello
    {
        //Logic
    };
}
//using namespace Marvellous
int main()
{
    std::cout<<"Inside Main\n";
    //Demo dobj;
    //Hello hobj;
    Marvellous::Demo dobj;
    PPA::Hello hobj;

    return 0;
}