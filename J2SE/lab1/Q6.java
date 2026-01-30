/*Q6)Write an application that calculate the square and cubes of number from 0to10 and print the resulting value
in table format. */
public class Q6
{
    public static void main(String[] args)
    {
        System.out.printf("%-10s%-10s%-10s%n", "Number", "Square", "Cube");
        for (int i = 0; i <= 10; i++)
        {
            int square = i * i;
            int cube = i * i * i;
            System.out.printf("%-10d%-10d%-10d%n", i, square, cube);
        }
    }
}