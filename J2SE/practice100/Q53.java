/*Write a program to check if a student passed or failed (pass marks = 40). */
import java.util.Scanner;
public class Q53 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the marks obtained by the student: ");
        double marks = scanner.nextDouble();
        if (marks >= 40) 
        {
            System.out.println("The student has passed.");
        } 
        else 
        {
            System.out.println("The student has failed.");
        }
        scanner.close();
    }
}
