#include<iostream>
using namespace std;
class base 
{  public:

    int i,j;

    void fun()  //1000
         {cout<<"inside base fun\n";}

 virtual void gun()  //2000
{cout<<"inside base gun\n";}

   virtual void sun()  //3000
{cout<<"inside base sun\n";}




}; //8 bytes
class derived :public base
{

    public :
 
   
        int x,y;


    void fun() //4000

         {cout<<"inside derived fun\n";}

 void sun()  //5000
    
         {cout<<"inside derived sun\n";}
    
 virtual   void run()  //6000
    
           {cout<<"inside derived run\n";}  

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
