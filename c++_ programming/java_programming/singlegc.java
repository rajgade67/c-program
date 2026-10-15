class base
{
    public int i;
    public int j;

    public base()
    {

        System.out.println("inside base constructor");
this.i=0;
this.j=0;


    }

    protected void fianalize()
    {
         System.out.println("inside fianalize method of base ");



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
        
    }
    public void gun()
    {
       System.out.println("inside the method "); 
    }


  }

class singlegc
{
    public static void main (String A[])
    {
          System.out.println("inside main ");

          Derived dobj = new Derived();

          System.out.println(dobj.i);
          System.out.println(dobj.j);
          System.out.println(dobj.x);

          dobj.fun();
          dobj.gun();
 dobj = null;

 System.gc();
 

             System.out.println("end of main ");


    }
}