package Gavu;
import java.util.Scanner;
public class dollar {

    public static void main(String[] args) {
        float rupees;
        Scanner in=new Scanner(System.in);
        System.out.println("Please Enter Rupees:");
        rupees=in.nextLong();
        float dollar=rupees/81.5f;
        System.out.println(dollar+" Dollars");
        
                
    }
    
}
