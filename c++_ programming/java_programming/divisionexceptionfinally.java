import java.util.*;

class divisonExceptionFinally
{
    public static void main( String A[])

    {
        Scanner sobj = new Scanner (System.in);
        int no1 =0, no2 =0 ,ans =0;

        System.err.println("enter firt number :");
        no1  = sobj.nextInt(); 
    System.err.println("enter second  number :");
        no2  = sobj.nextInt(); 

        try
        {
            System.out.println("inside try block");
        }
        catch(ArithmaticException aboj )
        {
            System.out.println("inside catch block");
            System.out.println("exception occured :"+aboj);
        }
       catch(exception eobj)
       {
        System.out.println("inside generic catch : "+eobj);

       }
       finally
       {
        System.err.println("inside finally block");
        sobj =null;
       }
           
        System.out.println( "division is : "+ans);
    }
}
