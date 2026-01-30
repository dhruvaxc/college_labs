/*Create a program that uses logical operators to check if a 
person is eligible to vote (age &gt;= 18). */
import java.util.Scanner;
public class Q38 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age: ");
        int age = sc.nextInt();
        if (age >= 18) 
        {
            System.out.println("You are eligible to vote.");
        } 
        else 
        {
            System.out.println("You are not eligible to vote.");
        }
        sc.close();   
    }
}
