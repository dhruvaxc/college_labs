/*Create a program to store and display a character and its ASCII value. */
import java.util.Scanner;
public class Q43 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character: ");
        char character = sc.next().charAt(0);
        int asciiValue = (int) character;
        System.out.println("Character: " + character);
        System.out.println("ASCII Value: " + asciiValue);
        sc.close();
    }
}
