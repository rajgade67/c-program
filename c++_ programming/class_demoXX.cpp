#include <iostream>
using namespace std;



class demo 
    {
        public:
          int i;   //characteristics 

          float f;  // characteristics

          void fun()  //behavoiur
          
          {
           
            cout<<"inside fun\n";
          }
    };

    int main ()
    {
        demo dobj;

        cout<<dobj.i<<"\n"; //8
        
        dobj.fun();

        return 0;
    };
