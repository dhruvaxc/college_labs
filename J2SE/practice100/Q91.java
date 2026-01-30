/*Write a program to create an array of 5 integers, input values, and display them. */
import java.util.Scanner;

public class Q91
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Enter 5 integers:");
        int i = 0;
        while (i < arr.length)
        {
            arr[i] = sc.nextInt();
            i++;
        }
        System.out.println("You entered:");
        i = 0;
        while (i < arr.length)
        {
            System.out.println(arr[i]);
            i++;
        }
        sc.close();
    }
}