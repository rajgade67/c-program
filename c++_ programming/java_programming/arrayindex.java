import java.util.*;

class arrayindex 
{
    public static void main( String A[])

    {
        Scanner sobj = new Scanner (System.in);
        int arr[] ={11,21,51,101,111};
      
        System.out.println("enter the index of array:");

       int index =sobj.nextInt();

       System.out.println("element at that index is :"+arr[index]);
       System.out.println("end of application ");
    }
}
