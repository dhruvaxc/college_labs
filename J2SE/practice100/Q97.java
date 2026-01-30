/*Write a program to reverse an array. */
import java.util.Scanner;

public class Q97
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
        int start = 0;
        int end = arr.length - 1;
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        System.out.println("Reversed array:");
        i = 0;
        while (i < arr.length)
        {
            System.out.println(arr[i]);
            i++;
        }
        sc.close();
    }
}