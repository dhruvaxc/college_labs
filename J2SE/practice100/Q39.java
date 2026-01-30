/*Write a program to find the maximum of three numbers using ternary operator. */
import java.util.Scanner;
public class Q39 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter three numbers: ");
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        System.out.println("The maximum of " + a + ", " + b + ", and " 
        + c + " is: " + max);
        sc.close();
    }
}
