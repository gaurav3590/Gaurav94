
package Gavu;
import java.util.Scanner;
public class Practical7 {

    public static void main(String[] args) {
        int temp;
        Scanner dec=new Scanner(System.in);
        System.out.println("Enter 1st Integer:");
        int a=input.nextInt();
        System.out.println("Enter 2nd Integer:");
        int b=input.nextInt();
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        System.out.println("Enter 3rd Integer:");
        int c=input.nextInt();
        if(c>b)
        {
            if(c>a)
            {
                temp=c;
                c=b;
                b=a;
                a=temp;
                       
            }
            else
            {
                temp=c;
                c=b;
                b=temp;
            }
        }
        System.out.println("Decreasing Order:"+a+" "+b+" "+c);
        
    }
    
}
