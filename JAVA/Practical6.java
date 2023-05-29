
package Gavu;
import java.util.Scanner;
public class Practical6 {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String S1=new String();
        System.out.println("Enter A line:");
        S1=in.nextLine();
        char C;
        int ct=0;
        for(int i=0;i<S1.length();i++)
        {
            C=S1.charAt(i);
            if(C>=65&&C>=90)
            {
                ct++;
            }
        }
        System.out.println("Total Number of Words Start with Capital Letter Are:"+ct);
    }
}
