class base
{
    public int i;
    public int j;

    public base()
    {

        System.out.println("inside base constructor");
this.i=11;
this.j=21;


    }

   
    public void fun()
    {
         System.out.println("inside gun of Derived");

    }
}
  class Derived  extends base 
  {
    public int x;
    public Derived()
    {
           System.out.println("inside Derived constructor ");
        this.x=51;
    }
    public void gun()
    {
       System.out.println("inside the method "); 
       System.out.println("value of i: "+super.i); 
         System.out.println("value of j: "+super.j); 
           System.out.println("value of x: "+this.x); 
    }


  }

class ThisSuper
{
    public static void main (String A[])
    {
         
Derived dobj = new Derived ();

dobj.gun();
      

    }
}