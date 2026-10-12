
#include<iostream>
using namespace std;

class arithmatic 
{
    public :
      int no1;
         int no2;

        arithmatic()
        {
            no1 =0;
            no2 =0;

        }

            arithmatic (int value1, int value2)
        {
            no1 = value1;
            no2 = value2;
        }

        int addition ()
      {
         int ans = 0;
        ans = no1 + no2;
        return ans;
      }

        int substraction ()
     {
       int ans = 0;
    ans = no1 - no2;
     return ans;

     }
};


int main()
{

      arithmatic aobj(11,10);
      int result = 0;

      result =aobj.addition();
      cout<<"addition is : "<<result<<"\n";
     
      result =aobj.substraction();
      cout<<"substraction is : "<<result<<"\n";



    return 0;

}