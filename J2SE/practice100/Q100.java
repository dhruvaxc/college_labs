/*Create a program using a 2D array to represent and display a matrix (3x3). */
import java.util.Scanner;

public class Q100
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[][] matrix = new int[3][3];
        System.out.println("Enter 9 integers for a 3x3 matrix:");
        int i = 0;
        while (i < 3)
        {
            int j = 0;
            while (j < 3)
            {
                matrix[i][j] = sc.nextInt();
                j++;
            }
            i++;
        }
        System.out.println("Matrix:");
        i = 0;
        while (i < 3)
        {
            int j = 0;
            while (j < 3)
            {
                System.out.print(matrix[i][j] + " ");
                j++;
            }
            System.out.println();
            i++;
        }
        sc.close();
    }
}