#include<iostream>
using namespace std;
class base 
{  public:

    int i,j;

    void fun()
         {cout<<"inside base fun\n";}

 virtual void gun()
{cout<<"inside base gun\n";}

   virtual void sun()
{cout<<"inside base sun\n";}




}; //8 bytes
class derived :public base
{

    public :
 
   
        int x,y;


    void fun()  //redefination

         {cout<<"inside derived fun\n";}

 void sun()  //redefination
    
         {cout<<"inside derived sun\n";}
    
 virtual   void run()  //redefination
    
           {cout<<"inside derived run\n";}  //defination

}; //16 bytes

int main ()
{

      base *bp = new derived(); //upcasting 

      bp->fun();  //base fun 
      
      
      bp->gun();   //base gun
      
      bp->sun();  //base sun
      
          // bp->run();  //error

      
      
      
      
     
      

  
                return 0;
}
