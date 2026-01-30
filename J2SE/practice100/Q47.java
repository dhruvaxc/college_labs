/*Create a program that stores a boolean 
value indicating if a student passed (marks >; 40). */
import java.util.Scanner;
public class Q47 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the marks obtained by the student: ");
        int marks = sc.nextInt();
        boolean hasPassed = marks > 40;
        if (hasPassed) {
            System.out.println("The student has passed.");
        } else {
            System.out.println("The student has not passed.");
        }
        sc.close();
    }
}
