package Gavu;
import java.util.Scanner;
public class Practical4 {

    public static void main(String[] args) {
       Scanner input=new Scanner(System.in);
       System.out.println("Value from Equalion1:");
       System.out.println("Enter the Value of A:");
       double a=input.nextDouble();
       System.out.println("Enter the Value of B:");
       double b=input.nextDouble();
       System.out.println("Enter the Value of E:");
       double e=input.nextDouble();
       System.out.println("Value from Equalion2:");
       System.out.println("Enter the Value of C:");
       double c=input.nextDouble();
       System.out.println("Enter the Value of D:");
       double d=input.nextDouble();
       System.out.println("Enter the Value of F:");
       double f=input.nextDouble();
       double x=((e*d)-(b*f))/((a*d)-(b*c));
       double y=((a*f)-(e*c))/((a*d)-(b*c));
       System.out.println("X="+x+"Y="+y);
    }
    
}
