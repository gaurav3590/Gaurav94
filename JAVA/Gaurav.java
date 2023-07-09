
package Gavu;
import java.util.*;
public class Gavu {

    public static void main(String[] args) {
        int i, j, k, len;
        String s=new String();
        char c[]=new char[s.length()];
        Scanner sc=new Scanner(System.in);
        System.out.print("\nEnter a string:");
        s=sc.nextLine();
        System.out.println(s);
        len=s.length();
        k=len;
        for(i=len; i>=0; i--){
            for(j=0; j<=len; j++){
                c[j]=s.charAt(j);
                if(i>j){
                    System.out.print(c[len-k]);
                }
                System.out.print(" ");
            }
        }
    }
}
