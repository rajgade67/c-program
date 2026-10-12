#include<iostream>
using namespace std;

// Encapsulation

class marvellous

{
    // Access specifier (by default private)
 
    private :

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

    cout<<mobj1.no1<<"\n";   //error

    mobj1.fun();    //error
    mobj2.fun();    //error 
   
    mobj1.gun();  //error



    return 0;
     
}