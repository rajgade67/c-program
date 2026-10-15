class base
{
    public int i;
    

    public base(int no)
    {

        System.out.println("inside base constructor");
this.i=no;



    }

   
    public void fun()
    {
         System.out.println("inside gun of Derived");

    }
}
  class Derived  extends base 
  {
    public int i;
    public Derived()
    {
           System.out.println("inside Derived constructor ");
      this.i =21;
    }
    public void gun()
    {
       System.out.println("inside the method "); 
       System.out.println("value of i: "+i); 
        System.out.println("value of i from base : "+super.i); 
         
    }

  }

class superdemo
{
    public static void main (String A[])
    {
         
Derived dobj = new Derived ();

dobj.gun();
      

    }
}
