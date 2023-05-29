
package Gavu;
import java.util.Scanner;
public class Practical3 {
    public static void main(String[] args) {
        int marks[]=new int[7];
        int total=0;
        float percentage;
        Scanner scan=new Scanner(System.in);
        for(int i=0;i<=6;i++)
        { 
            marks[i]=scan.nextInt();
            
        }
        for(int i=1;i<=6;i++)
        {
            total=total+marks[i];
        }
        percentage=(total*100)/600;
        System.out.println("Student Percentage:"+percentage);
        
    }
    
}
