/*Write a program to check if a character is uppercase, lowercase, or a digit. */
import java.util.Scanner;
public class Q46 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char ch = sc.next().charAt(0);
        if (ch >= 'A' && ch <= 'Z') {
            System.out.println(ch + " is an uppercase letter.");
        } 
        else if (ch >= 'a' && ch <= 'z') 
        {
            System.out.println(ch + " is a lowercase letter.");
        } 
        else if (ch >= '0' && ch <= '9') 
        {
            System.out.println(ch + " is a digit.");
        } 
        else 
        {
            System.out.println(ch + " is a special character.");
        }
        sc.close();
    }
}
