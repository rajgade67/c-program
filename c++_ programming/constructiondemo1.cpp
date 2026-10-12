#include<iostream>
using namespace std;

// Encapsulation

class marvellous

{
    // Access specifier
 
    public :

        int no1,no2;   //characteristics
         // default constructor
    marvellous()

    {
          cout<<"inside default constructor\n";
            
          no1 =0;
          no2 =0;

    }
    

    // parameterised constructor
     marvellous(int a ,int b)

    {
          cout<<"inside parameterised constructor\n";
            
          no1 =a;
          no2 =b;

    }
      // copy constructour
    marvellous(marvellous &ref)
    {
        cout<<"inside copy constructour\n";
        
    }

    // destructor

    ~marvellous()
    {
        cout<<"inside destructor\n";
    }


       
};


int main()
{
    cout<<"inside main\n";
    marvellous mobj1();     //default constructor 
    marvellous mobj2(11,21); // parametrised constructor 
    marvellous mobj3(mobj2);  //copy constructour

    return 0;
     
}  //all distructors gets called 