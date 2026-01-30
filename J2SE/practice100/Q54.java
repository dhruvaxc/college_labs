/*Create a program to calculate electricity bill 
based on units consumed (use if-else-if). */
import java.util.Scanner;
public class Q54 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of units consumed: ");
        int units=sc.nextInt();
        double billAmount;
        if(units <= 100) 
        {
            billAmount = units * 1.5;
        } 
        else if(units <= 200) 
        {
            billAmount = (100 * 1.5) + ((units - 100) * 2.0);
        } 
        else 
        {
            billAmount = (100 * 1.5) + (100 * 2.0) + ((units - 200) * 3.0);
        }
        sc.close();
        System.out.printf("The total electricity bill is: "+ billAmount);
    }
}
