#include<iostream>
using namespace std;

// Encapsulation

class marvellous

{
    // Access specifier
 
    public :

        int no1,no2;   //characteristics

        void fun()    //behavoiur
        {
          
            cout<<"inside fun\n";

        }

        void gun()   //behaviour
    {
       
        cout<<"inside gun\n";

    }
};


int main()
{
    //object create (instance)
 
    marvellous mobj1;

    marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";   //8

    cout<<mobj1.no1<<"\n";

    mobj1.fun();
    mobj2.fun();
   
    mobj1.gun();



    return 0;
     
}