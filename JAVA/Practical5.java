
package Gavu;
import java.util.Scanner;
public class Practical5 {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the VAlues in Meter:");
        double meter=input.nextDouble();
        double feet=meter*3.2084;
        System.out.println(meter+"Meter"+feet+"Feet");
        
    }
    
}
