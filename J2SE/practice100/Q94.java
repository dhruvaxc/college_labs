/*Create a program to calculate the average of array elements. */
import java.util.Scanner;

public class Q94
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
        int sum = 0;
        i = 0;
        while (i < arr.length)
        {
            sum = sum + arr[i];
            i++;
        }
        double average = (double) sum / arr.length;
        System.out.println("Average of elements: " + average);
        sc.close();
    }
}