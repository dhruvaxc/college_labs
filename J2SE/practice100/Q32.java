/*Create a program that checks if a number 
is even or odd using the modulus operator. */

import java.util.Scanner;
public class Q32 
{
    public static void main(String[] args) 
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter an integer number:");
        int number = sc.nextInt();
        sc.close();
        if (number % 2 == 0) 
        {
            System.out.printf("The number %d is even.%n", number);
        } 
        else 
        {
            System.out.printf("The number %d is odd.%n", number);
        }
    }
}
