/*Write a program to copy elements from one array to another. */
import java.util.Scanner;

public class Q99
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] source = new int[5];
        int[] destination = new int[5];
        System.out.println("Enter 5 integers:");
        int i = 0;
        while (i < source.length)
        {
            source[i] = sc.nextInt();
            i++;
        }
        i = 0;
        while (i < source.length)
        {
            destination[i] = source[i];
            i++;
        }
        System.out.println("Copied elements:");
        i = 0;
        while (i < destination.length)
        {
            System.out.println(destination[i]);
            i++;
        }
        sc.close();
    }
}