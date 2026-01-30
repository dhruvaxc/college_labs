/*Write a program to find the largest element in an array. */
import java.util.Scanner;

public class Q93
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
        int max = arr[0];
        i = 1;
        while (i < arr.length)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            i++;
        }
        System.out.println("Largest element: " + max);
        sc.close();
    }
}