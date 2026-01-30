/*Write a program to search for an element in an array (linear search). */
import java.util.Scanner;

public class Q95
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
        System.out.print("Enter element to search: ");
        int key = sc.nextInt();
        boolean found = false;
        i = 0;
        while (i < arr.length)
        {
            if (arr[i] == key)
            {
                found = true;
                break;
            }
            i++;
        }
        if (found)
        {
            System.out.println("Element " + key + " found at position " + (i + 1));
        }
        else
        {
            System.out.println("Element " + key + " not found.");
        }
        sc.close();
    }
}