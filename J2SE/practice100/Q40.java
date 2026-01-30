/*Create a program to check if a year is a leap year using logical operators. */
import java.util.Scanner;
public class Q40 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a year: ");
        int year = sc.nextInt();
        if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            System.out.println(year + " is a leap year.");
        } 
        else 
        {
            System.out.println(year + " is not a leap year.");
        }
        sc.close();
    }
}
