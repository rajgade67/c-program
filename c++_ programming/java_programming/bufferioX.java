import java.io.*;

class bufferediothrows
{
    public static void main (String A[])  //throws io exception
    {
        Bufferreader bobj = new Bufferreader ( new inputstreamreader(System.in ));
        String name = bobj.readerline(); //check exception 

        System.err.println("hello "+name );
    }
}
