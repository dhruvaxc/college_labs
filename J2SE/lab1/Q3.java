/*write an application that input three integer from the user and obtain the sum, average,product,largest and
smallest of the numbers using interface and abstract class concept. */
import java.util.Scanner;
interface operations
{
    int sum(int a, int b, int c);
    int product(int a, int b, int c);
    int average(int a, int b, int c);
    int smallest_largest(int a, int b, int c);
}
abstract class calculations implements operations
{
    public int sum(int a, int b, int c)
    {
        return (a + b + c);
    }
    public int product(int a, int b, int c)
    {
        return (a * b * c);
    }
    public int average(int a, int b, int c)
    {
        return (a + b + c) / 3;
    }
}
class compare extends calculations
{
    public int smallest_largest(int a, int b, int c)
    {
        int largest = a;
        if (b > largest)
            largest = b;
        if (c > largest)
            largest = c;
        int smallest = a;
        if (b < smallest)
            smallest = b;
        if (c < smallest)
            smallest = c;
        System.out.println("Largest: " + largest);
        System.out.println("Smallest: " + smallest);
        return 0;
    }
}
public class Q3 
{
    public static void main(String[] args)
    {
        System.out.println("enter 3 numbers :");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        operations op = new compare();
        System.out.println("Sum: " + op.sum(a, b, c));
        System.out.println("Product: " + op.product(a, b, c));
        System.out.println("Average: " + op.average(a, b, c));
        op.smallest_largest(a, b, c);
        sc.close();
    }
}
