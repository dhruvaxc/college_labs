/*Create a program to sort an array in ascending order (bubble sort). */
import java.util.Scanner;

public class Q96
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
        int n = arr.length;
        int j = 0;
        while (j < n - 1)
        {
            i = 0;
            while (i < n - j - 1)
            {
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
                i++;
            }
            j++;
        }
        System.out.println("Sorted array in ascending order:");
        i = 0;
        while (i < arr.length)
        {
            System.out.println(arr[i]);
            i++;
        }
        sc.close();
    }
}