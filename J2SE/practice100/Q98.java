/*Create a program to find the second largest element in an array. */
import java.util.Scanner;

public class Q98
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
        int largest = arr[0];
        int second = Integer.MIN_VALUE;
        i = 1;
        while (i < arr.length)
        {
            if (arr[i] > largest)
            {
                second = largest;
                largest = arr[i];
            }
            else if (arr[i] > second && arr[i] != largest)
            {
                second = arr[i];
            }
            i++;
        }
        if (second == Integer.MIN_VALUE)
        {
            System.out.println("No second largest element.");
        }
        else
        {
            System.out.println("Second largest element: " + second);
        }
        sc.close();
    }
}